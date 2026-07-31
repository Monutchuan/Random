#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QWidget>
#include <QSettings>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QContextMenuEvent>
#include <QMenu>
#include <QInputDialog>
#include <QMessageBox>
#include <QDateTime>

namespace Ui {
class ListWindow;
}

class ListWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ListWindow(QWidget *parent = nullptr);
    ~ListWindow();

private slots:
    void on_btnSlotA_clicked();

    void on_btnSlotB_clicked();

    void on_actionRename_triggered();

    void on_actDelete_triggered();

    void on_actImport_triggered();

    void on_actNew_triggered();

    void on_actExport_triggered();

    void on_btnNew_clicked();

private:
    Ui::ListWindow *ui;
    QString currentSlot;
    QStringList headers;          // 表头
    QList<QStringList> dataRows;  // 数据行
    QString listToString();
    void refreshListWindow();
    void refreshListWidget();
    void refreshTableWidget();
    void refreshABSelected();
    void refreshHeaderIndex(QString SlotID);
    int slotARow = -1;
    int slotBRow = -1;
    bool isSlotA = true;
    QString slotAID, slotBID;
protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

};

#endif // LISTWINDOW_H
