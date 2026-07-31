#include "listwindow.h"
#include "ui_listwindow.h"
extern QSettings settings;

ListWindow::ListWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListWindow)
{
    ui->setupUi(this);
    ui->listWidget->installEventFilter(this);

}

ListWindow::~ListWindow()
{
    delete ui;
}

void ListWindow::refreshListWindow()
{
    ui->listWidget->clear();
    QStringList slotList = settings.value("SlotList").toStringList();
    ui->listWidget->addItems(slotList);
    QListWidgetItem *item = nullptr;
    QString slotA = settings.value("SlotA").toString();
    QString slotB = settings.value("SlotB").toString();
    slotARow = -1;
    slotBRow = -1;

    for(int i=0; i<ui->listWidget->count(); i++)
    {
        item = ui->listWidget->item(i);
        item->setIcon(QIcon(":/resource/File.png"));
        if(item->text()==slotA) slotARow = i;
        if(item->text()==slotB) slotBRow = i;
    }
    refreshABSelected();
}

void ListWindow::refreshListWidget()
{
    ui->listWidget->clear();
    QStringList slotList = settings.value("SlotList").toStringList();
    ui->listWidget->addItems(slotList);
    QListWidgetItem *item;
    slotARow = -1;
    slotBRow = -1;
    for(int i=0; i<ui->listWidget->count(); i++)
    {
        item = ui->listWidget->item(i);
        item->setIcon(QIcon(":/"));
        item->setData(Qt::ToolTipRole, slotList[i]);
        if(slotList[i]==slotAID) slotARow = i;
        if(slotList[i]==slotBID) slotBRow = i;
    }
    refreshABSelected();
}

void ListWindow::on_btnSlotA_clicked()
{
    refreshABSelected();
}


void ListWindow::on_btnSlotB_clicked()
{
    refreshABSelected();
}

void ListWindow::refreshABSelected()
{//根据A或B档设定列表选定项
    QListWidgetItem *item = nullptr;
    int slotRow = ui->btnSlotA->isChecked() ? slotARow : slotBRow;
    item = ui->listWidget->item(slotRow);
    item->setSelected(true);
    //再刷新一下SlotID
    QStringList slotList = settings.value("SlotList").toStringList();
    ui->btnSlotA->isChecked() ? slotAID : slotBID = slotList[slotRow];
}

void ListWindow::refreshTableWidget()
{//刷新表格
    //在注册表中取得与SlotID相对应的内容数据
    settings.beginGroup(ui->btnSlotA->isChecked() ? slotAID : slotBID);
    QString header = settings.value("Header", "").toString(); //取得表头数据
    if(header.isEmpty())
    {//如果该档没有表头数据
        QMessageBox::critical(this, tr("Critical"), tr("The header data is invalid, please reset it"));
        return;
    }
    header.remove(0,1);
    QStringList headerList = header.split(QRegularExpression("//s+"), Qt::SkipEmptyParts);

    QString content = settings.value("Content").toString(); //取得内容数据
    QStringList contentList = content.split(QRegularExpression("//s+"), Qt::SkipEmptyParts);

    settings.endGroup();

    //数据已准备就绪，准备导入至表格
    ui->tableWidget->clear(); // 将表格所有数据清除
    //ui->tableWidget->setColumnCount(header.size()); //列数
    ui->tableWidget->setRowCount(content.size()); //行数
    ui->tableWidget->setHorizontalHeaderLabels(headerList); //导入表格

    QTableWidgetItem *item;
    for(int i=0; i<contentList.size(); i++)
    {//为一行的所有列设定数据
        QString line = contentList[i]; //取得内容数据的一行
        QStringList lineList = line.split(QRegularExpression("//s+"), Qt::SkipEmptyParts);
        for(int j=0; j<headerList.size(); j++)
        {
            item = new QTableWidgetItem(lineList[j]);
            ui->tableWidget->setItem(i, j, item); //i是行，j是列
        }
    }
}

void ListWindow::on_actionRename_triggered()
{
    QString slotID = isSlotA ? slotAID : slotBID;
    settings.beginGroup(slotID);
    QString title = tr("Rename");
    QString label = tr("Rename \"%1\":").arg(settings.value("Name").toString());
    QLineEdit::EchoMode mode = QLineEdit::Normal;
    QString text = settings.value("Name").toString();
    bool ok = false;
    QString name = QInputDialog::getText(this, title, label, mode, text, &ok);
    if(ok)
    {
        if(name.isEmpty())
        {
            QMessageBox::critical(this, tr("Critical"), tr("You did not enter a name!"));
            on_actionRename_triggered();
        }
        else if(name == text)
        {
            QMessageBox::critical(this, tr("Critical"), tr("You did not change your name!"));
            on_actionRename_triggered();
        }
        else
        {
            settings.setValue("Name", name);
            refreshListWidget();
        }
        settings.endGroup();
    }
}

void ListWindow::on_actDelete_triggered()
{
    QString slotID = isSlotA ? slotAID : slotBID;
    settings.beginGroup(slotID);

    QString title = tr("Question");
    QString text = tr("Are you sure you want to delete \"%1\"?").arg(settings.value("Name").toString());
    QMessageBox::StandardButton result;
    result = QMessageBox::question(this, title, text);
    if(result == QMessageBox::Yes)
    {//如果用户确定，首先将档内数据删除
        settings.remove("");
        settings.endGroup();

        //尽管数据已删除，但其ID仍留存在档列表中
        QStringList slotList = settings.value("SlotList").toStringList();
        for(int i=0; i<slotList.size(); i++)
        {//在列表中找到该档ID，并删除
            if(slotList[i]==slotID)
            {
                slotList.removeAt(i);
                break;
            }
        }
        settings.value("SlotList", slotList);
        refreshListWidget();
        refreshTableWidget();
    }
}


void ListWindow::on_actImport_triggered()
{//导入档功能
    QString caption = tr("Open the file to be imported");
    QString dir = QDir::homePath();
    QString filter = QString("%1(*.txt)").arg(tr("Text Files"));
    QStringList fileList = QFileDialog::getOpenFileNames(this, caption, dir, filter);
    if(filter.isEmpty()) return;
    QStringList stateList; //存储导入成功与否的文本
    for(int i=0; i<fileList.size(); i++)
    {
        QFile file(fileList[i]);
        QFileInfo fileInfo(fileList[i]);

        if(file.open(QIODevice::ReadOnly|QIODevice::Text))
        {//档如果已经成功用读方式打开
            QTextStream stream (&file); //为读取文本档做准备
            //将列表名称列入清单
            QDateTime dateTime = QDateTime::currentDateTime();
            QString slotID = dateTime.toString("yyyyMMddhhmmsszzz");
            QStringList slotList = settings.value("SlotList").toStringList();
            slotList.append(slotID);
            settings.setValue("SlotList", slotList);
            //将档数据放入注册表
            settings.beginGroup(slotID);
            settings.setValue("Name", fileInfo.completeBaseName());
            //检测表头数据
            QString header = stream.readLine();
            if(header.count("@")==1)
            {//该行包含一个“@”，才是合格的表头数据
                settings.setValue("Header", header);
                settings.setValue("Content", stream.readAll());
                stateList<<tr("\"%1\"Import successful!").arg(fileInfo.fileName());
            }
            else
            {//无有效表头数据，只好自己生成一个表头，导入的数据全都是“Content”
                QStringList headerList = header.split(QRegularExpression("//s+"), Qt::SkipEmptyParts);
                headerList[0] = tr("@Name");
                for(int i=1; i<headerList.size(); i++)
                    headerList[i] = tr("Unknown");

                settings.setValue("Header", headerList.join("\t"));
                header.append(stream.readAll()); //现在该变量包含所有“Content”数据
                settings.setValue("Content", header);

                //导入成功，但其表头数据未正确导入。
                stateList<<tr("\"%1\"The import was successful, but the header data was not imported correctly.").arg(fileInfo.fileName());
            }
            settings.endGroup();
            file.close();
        }
        else
            stateList<<tr("\"%1\"Import failed!").arg(fileInfo.fileName());
    }

    //如果仅导入了一个档案，将其设为A档或B档的选定项
    if(fileList.size()==1)
    {
        QStringList slotList = settings.value("SlotList").toStringList();
        settings.setValue(isSlotA ? "SlotAID" : "SlotBID", slotList[slotList.size()-1]);
        refreshTableWidget();
    }
    refreshListWidget();

    if(stateList.count(tr("The import was successful, but the header data was not imported correctly."))>0)
        QMessageBox::warning(this, tr("Warning"), stateList.join("\n"));
    else if((stateList.count(tr("Import failed!"))>0)&&(stateList.count(tr("Import successful!"))==0))
        QMessageBox::critical(this, tr("Critical"), stateList.join("\n"));
    else
        QMessageBox::information(this, tr("Information"), stateList.join("\n"));
}


void ListWindow::on_actNew_triggered()
{
    QString title = tr("New Slot");
    QString label = tr("Input file name"); //输入档名称
    QLineEdit::EchoMode mode = QLineEdit::Normal;
    QString text = "";
    bool ok = false;
    QString slotName = QInputDialog::getText(this, title, label, mode, text, &ok);
    if(ok)
    {
        if(slotName.isEmpty())
        {
            QMessageBox::critical(this, tr("Critical"), tr("You did not enter a name!")); //您没有输入名称
            return;
        }
        QDateTime dateTime = QDateTime::currentDateTime();
        QString slotID = dateTime.toString("yyyyMMddhhmmsszzz");
        QStringList slotList = settings.value("SlotList").toStringList();
        slotList.append(slotID);
        settings.setValue("SlotList", slotList);

        settings.beginGroup(slotID);
        settings.setValue("Name", slotName);
        settings.setValue("Header", "@Name");
        settings.endGroup();

        //依据当前状态，将新档设为A档或B档
        settings.setValue(isSlotA ? "SlotAID" : "SlotBID", slotID);

        //刷新列表和表格
        refreshListWidget();
        refreshTableWidget();
    }
}

void ListWindow::on_actExport_triggered()
{
    //首先要打开需要操作的档
    settings.beginGroup(isSlotA ? slotAID : slotBID);

    QString caption = tr("Export \"%1\"").arg(settings.value("Name").toString());
    QString dir = QDir::homePath();
    QString filter = tr("Text Files (*.txt)");
    QString fileName = QFileDialog::getSaveFileName(this, caption, dir, filter);

    //如果用户放弃保存，则返回
    if(fileName.isEmpty()) return;

    //如果档已存在，则先删除
    if(QFile::exists(fileName)) QFile::moveToTrash(fileName);

    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly|QIODevice::Text))
    {//档如果已经成功以写方式打开
        QTextStream stream(&file); //使用文本流
        stream.setAutoDetectUnicode(true); //自动检测 Unicode
        stream<<settings.value("Header").toString(); //写入文本流
        stream<<settings.value("Content").toString(); // 写入文本流
        file.close();

        QMessageBox::information(this, tr("Information"), tr("Export successful!"));
    }
    else
        QMessageBox::critical(this, tr("Criticial"), tr("Export failed!"));
}

void ListWindow::on_btnNew_clicked()
{
    QString title = tr("New Slot");
    QString label = tr("Type A Slot Name");
    QLineEdit::EchoMode mode = QLineEdit::Normal;
    QString text = "";
    bool ok = false;

    QString slotName = QInputDialog::getText(this, title, label, mode, text, &ok);
    if(ok)
    {
        if(slotName.isEmpty())
        {
            QString title = tr("Critical");
            QString text = "you have not type name";
            QMessageBox::critical(this, title, text);
            return;
        }
        QDateTime dateTime = QDateTime::currentDateTime();
        QString slotID = dateTime.toString("yyyyMMddhhmmsszzz");
        QStringList slotList = settings.value("SlotList").toStringList();
        slotList.append(slotID);
        settings.setValue("SlotList", slotList);

        settings.beginGroup(slotID);
        settings.setValue("Name", slotName);
        settings.setValue("Header", "@Name");
        settings.endGroup();

        // 依照当前状态，将新槽设为A槽或B槽
        settings.setValue(isSlotA ? "SlotAID" : "SlotBID", slotID);

        // 刷新列表和表格
        refreshListWidget();
        refreshTableWidget();
    }
}

bool ListWindow::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->listWidget && event->type() == QEvent::ContextMenu) {
        QContextMenuEvent *contextEvent = static_cast<QContextMenuEvent *>(event);
        QPoint pos = contextEvent->pos();
        QListWidgetItem *item = ui->listWidget->itemAt(pos);

        QMenu menu(this);

        if (item) {
            // 点击在某个 item 上
            menu.addAction(ui->actionRename);
            menu.addAction(ui->actionHeader);
            menu.addAction(ui->actionCrypto);
            menu.addAction(ui->actionExport);
            menu.addAction(ui->actionDelete);

            // 可选：保存当前 item 用于后续槽函数操作
            ui->listWidget->setCurrentItem(item);

        } else {
            // 点击在空白处
            menu.addAction(ui->actionNew);
            menu.addAction(ui->actionImport);
        }

        menu.exec(contextEvent->globalPos());
        return true;
    }

    return QWidget::eventFilter(watched, event);
}
