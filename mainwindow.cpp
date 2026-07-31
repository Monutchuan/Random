#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    QActionGroup *actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actionSingle);
    actionGroup->addAction(ui->actionDouble);
    actionGroup->setExclusive(true);
    ui->actionSingle->setChecked(true);

    QMenu *menu = new QMenu(this);
    menu->addAction(ui->actionSingle);
    menu->addAction(ui->actionDouble);
    ui->btnMenu->setMenu(menu);

    timer = new QTimer(this);
    timer->stop();
    connect(timer, &QTimer::timeout, this, &MainWindow::do_timer_timeout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnList_clicked()
{
    listWindow = new ListWindow();
    listWindow->show();
}


void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0, 0, width(), height(), QPixmap(":/resource/background.png"));
}


void MainWindow::on_actionSingle_toggled(bool arg1)
{
    if(arg1)
    {
        ui->btnStart->setChecked(false); //如果正在自动抽取，这可以停止它和定时器

        // 设置标题文本
        ui->labTitle->setText(slotAName);

        // 设置项目文本
        ui->labItem->setText(tr("TextBlock"));
        ui->labCount->setText(QString("0/%1").arg(slotAList.size()));
        ui->btnLast->setEnabled(!slotAList.isEmpty());
        // 设置上一个按钮的文本和箭头类型
        ui->btnLast->setText("");
        ui->btnLast->setArrowType(Qt::LeftArrow);
        ui->btnStart->setEnabled(!slotAList.isEmpty());
        // 根据按钮是否可选中设置上一个按钮的文本
        ui->btnStart->setText(ui->btnLast->isCheckable() ? tr("Start") : tr("Choose"));
        ui->btnNext->setEnabled(!slotAList.isEmpty());
        // 设置下一个按钮的文本为空，并设置箭头类型
        ui->btnNext->setText("");
        ui->btnNext->setArrowType(Qt::RightArrow);
    }

}

void MainWindow::on_actionDouble_toggled(bool arg1)
{
    if(arg1)
    {
        ui->btnStart->setChecked(false); //如果正在自动抽取，这可以停止它和定时器

        ui->labTitle->setText(QString("A:%1\nB:%2").arg(slotAName).arg(slotBName));

        ui->labItem->setText(QString("TextBlock A\nTextBlock B"));
        ui->labCount->clear();
        ui->btnLast->setEnabled(!slotAList.isEmpty());
        ui->btnLast->setArrowType(Qt::NoArrow);
        ui->btnLast->setText(ui->btnLast->isCheckable() ? tr("Start A") : tr("Choose A"));
        ui->btnStart->setEnabled(!slotAList.isEmpty() || !slotBList.isEmpty());
        ui->btnStart->setText(ui->btnStart->isCheckable() ? tr("Start A&B") : tr("Choose A&B"));
        ui->btnNext->setEnabled(!slotBList.isEmpty());
        ui->btnNext->setArrowType(Qt::NoArrow);
        ui->btnNext->setText(ui->btnNext->isCheckable() ? tr("Start B") : tr("Choose B"));
    }
}

void MainWindow::on_btnLast_toggled(bool checked)
{
    if (ui->actionSingle->isChecked())
    {
        // 單抽模式，點了 btnLast 時直接拿 slotAlist 的最後一個元素
        if (slotAList.isEmpty()) return;
        slotAIndex = slotAList.size() - 1;
        slotAIndex--;
        ui->labItem->setText(slotAList[slotAIndex]);
        ui->labItem->setText(QString("%1/%2").arg(slotAIndex + 1).arg(slotAList.size()));
    }
    else
    {
        // 連抽模式，btnLast 的意思是隨機抽取但不刪除 slotAList 的元素
        if (!ui->btnLast->isChecked())
        {
            // 取消勾選時，正常抽取
            int index = QRandomGenerator::global()->bounded(slotAList.size());
            QString text = ui->labItem->text();
            text.replace(QRegularExpression("\\d+"), slotAList[index]);
            ui->labItem->setText(text);
        }
    }
    // 如果 btnLast 引出連抽，則自動抽取
    if (checked)
    {
        ui->btnLast->setText(tr("Stop"));
        ui->btnStart->setEnabled(!ui->btnNext->isChecked());
        ui->btnNext->setEnabled(!ui->btnStart->isChecked());
        QString text = ui->labItem->text();
        int index = QRandomGenerator::global()->bounded(slotAList.size());
        text.replace(QRegularExpression("\\d+"), slotAList[index]);
        timer->stop();
        // 這段如果要變更單一元素回傳回來，labItem 就要走這裡增加自定義處理
        ui->labItem->setText(text);
        if (ui->btnNext->isChecked())
        {
            timer->start(settings.value("AutoMSecond").toInt());
        }
    }
}

void MainWindow::on_btnNext_toggled(bool checked)
{
    if (ui->actionSingle->isChecked())
    {
        // 單抽模式，btnNext 的作用是輪取 slotAList 的下一個元素
        if (slotAIndex == slotAList.size() - 1)
            slotAIndex = 0;
        else
            slotAIndex++;
        ui->labItem->setText(slotAList[slotAIndex]);
        ui->labCount->setText(QString("%1/%2").arg(slotAIndex + 1).arg(slotAList.size()));
    }
    else
    {
        // 連抽模式，btnNext 的作用是隨機抽取最近顯示的 slotBList 的元素
        if (ui->btnNext->isChecked())
        {
            // 自動抽取模式，啟動自動抽取
            QString text = ui->labItem->text();
            int index = QRandomGenerator::global()->bounded(slotBList.size());
            text.replace(text.indexOf(" "), 1, slotBList[index]);
            ui->labItem->setText(text);
        }
    }

    // 如果 btnNext 引出連抽，則自動抽取
    if (checked)
    {
        ui->btnNext->setText(tr("Stop B"));
        ui->btnLast->setEnabled(!ui->btnNext->isChecked());
        ui->btnStart->setEnabled(!ui->btnLast->isChecked());
        ui->btnStart->setChecked(ui->btnLast->isChecked());
        
        QString text = ui->labItem->text();
        int index = QRandomGenerator::global()->bounded(slotBList.size());
        text.replace(text.indexOf(" "), 1, slotBList[index]);
        timer->stop();
        ui->labItem->setText(text);

        if (ui->btnLast->isChecked())
        {
            timer->start(settings.value("AutoMSecond").toInt());
        }
    }
}

void MainWindow::do_timer_timeout()
{
    // 自動隨機只保持結果輪抽和停下，並主動的話只代替單格作用
    QString text = ui->labItem->text();
    if (ui->btnLast->isChecked() || ui->btnStart->isChecked())
    {
        // btnLast 或 btnStart，純自用半單抽模式下的動作
        int index = qrand() % slotAList.size();
        text.replace(text.indexOf(" "), 1, slotAList[index]);
        
        if (ui->actionSingle->isChecked())
        {
            ui->labCount->setText(QString("%1/%2").arg(index + 1).arg(slotAList.size()));
            slotAIndex = index;
        }
    }
    else if (ui->btnNext->isChecked())
    {
        int index = qrand() % slotBList.size();
        text.replace(text.indexOf(" "), 1, slotBList[index]);
    }
    
    ui->labItem->setText(text);
}

void MainWindow::on_btnStart_clicked(bool checked)
{
    if (ui->actionSingle->isChecked())
    {
        // 單抽模式，按下時立即抽取
        int index1 = QRandomGenerator::global()->bounded(slotAList.size());
        ui->labItem->setText(slotAList[index1]);
        ui->labCount->setText(QString("%1/%2").arg(index1 + 1).arg(slotAList.size()));
        slotAIndex = index1;
    }
    else
    {
        // 非單抽時，點按 btnStart 則自動抽取
        if (checked)
        {
            // btnStart 已被按下，表示開始自動抽取
            ui->btnStart->setText(tr("Stop"));
            timer->start(settings.value("AutoMSecond", 20).toInt());
        }
        else
        {
            // btnStart 取消按下，表示停止自動抽取
            ui->btnStart->setText(tr("Start"));
            int index1 = QRandomGenerator::global()->bounded(slotAList.size());
            timer->stop();
            ui->labItem->setText(slotAList[index1]);
            ui->labCount->setText(QString("%1/%2").arg(index1 + 1).arg(slotAList.size()));
            slotAIndex = index1;
        }
    }
    ui->btnLast->setEnabled(!checked);
    ui->btnNext->setEnabled(!checked);

    else
    {
        // 雙作雙抽模式時
        if (ui->btnStart->isChecked())
        {
            // 當按下 btnStart 按鍵時，隨按立即抽取
            on_btnLast_toggled(false);  // 這裡當作點了 btnLast，後面的外掛值無意義
            on_btnNext_toggled(false);  // 這裡當作點了 btnNext，後面的外掛值無意義
        }
        else
        {
            // 取消 btnStart 按鍵時，則為自動抽取
            ui->btnStart->setText(checked ? tr("Stop AB") : tr("Start AB"));
            ui->btnLast->setEnabled(checked);
            ui->btnNext->setEnabled(checked);
        }
    }
}
