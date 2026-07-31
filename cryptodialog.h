#ifndef CRYPTODIALOG_H
#define CRYPTODIALOG_H

#include <QDialog>
#include <QSettings>
#include <QMessageBox>

namespace Ui {
class CryptoDialog;
}

class CryptoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CryptoDialog(int fMode, QString fSlotID, QWidget *parent = nullptr);
    ~CryptoDialog();

private slots:
    void on_btnOK_clicked();

private:
    Ui::CryptoDialog *ui;
    int mode ;
    QString slotID;
};

#endif // CRYPTODIALOG_H
