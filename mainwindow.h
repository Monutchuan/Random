#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMenu>
#include <QTimer>
#include <QRandomGenerator>
#include <QPainter>
#include "listwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnList_clicked();

    void do_timer_timeout();

    void on_btnStart_toggled(bool checked);

    void on_btnStart_clicked();

    void on_actionSingle_toggled(bool arg1);

    void on_actionDouble_toggled(bool arg1);

    void on_btnLast_toggled(bool checked);

    void on_btnNext_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    QSettings settings;
    ListWindow *listWindow;
    QTimer *timer;
    bool isSingleSelector = true;
    //QStringList slotAList, slotBList;
    int slotAIndex = 0;
    QString slotAName = QStringLiteral("高三五班");
    QString slotBName = QStringLiteral("高三五班");
    QStringList slotAList = {
        QStringLiteral("郭孝颖"), QStringLiteral("孙如梦"), QStringLiteral("徐华泽"), QStringLiteral("韩明睿"),
        QStringLiteral("张珂铭"), QStringLiteral("耿金龙"), QStringLiteral("许弘毅"), QStringLiteral("袁伟浩"),
        QStringLiteral("曹诗莹"), QStringLiteral("张兴华"), QStringLiteral("李荟佳"), QStringLiteral("张文哲"),
        QStringLiteral("宋沁恣"), QStringLiteral("张智铎"), QStringLiteral("谢国豪"), QStringLiteral("田峻豪"),
        QStringLiteral("杨义谦"), QStringLiteral("管凯芮"), QStringLiteral("王元一"), QStringLiteral("常锦锐"),
        QStringLiteral("杨云霄"), QStringLiteral("王嘉昊"), QStringLiteral("张文壮"), QStringLiteral("张晨鑫"),
        QStringLiteral("魏泽欣"), QStringLiteral("闫家乐"), QStringLiteral("朱恩惠"), QStringLiteral("邵怡菲"),
        QStringLiteral("王玟茜"), QStringLiteral("李梓轩"), QStringLiteral("石梦琪"), QStringLiteral("刘馨瑜"),
        QStringLiteral("孙浩瑄"), QStringLiteral("孟金科"), QStringLiteral("马浩哲"), QStringLiteral("罗梦茹")
    };

    QStringList slotBList = slotAList;



protected:
    void paintEvent(QPaintEvent *event);
};
#endif // MAINWINDOW_H
