#include "cryptodialog.h"
#include "ui_cryptodialog.h"
extern QSettings settings;

CryptoDialog::CryptoDialog(int fMode, QString fSlotID, QWidget *parent)
    : mode(fMode), slotID(fSlotID), QDialog(parent)
    , ui(new Ui::CryptoDialog)
{
    ui->setupUi(this);
    ui->HLayOldPassword->setHidden(mode != 1);
    switch(mode)
    {
    case 1:
        ui->labTitle->setText(tr("Change Password"));
    case 2:
        ui->labTitle->setText(tr("Remove Password"));
        ui->labNew->setText(tr("Password"));
    }
}

CryptoDialog::~CryptoDialog()
{
    delete ui;
}

void CryptoDialog::on_btnOK_clicked()
{
    settings.beginGroup(slotID);

    QString password = settings.value("Password").toString();
    QString oldPassword = ui->editOld->text();
    QString newPassword = ui->editNew->text();

    //首先检查密码与确认密码是否不相等
    if(ui->editNew->text() != ui->editConfirm->text())
    {
        QString title = tr("Warning");
        QString text = tr("The passwords you entered twice do not match!"); //两次输入的密码不一致
        QMessageBox::warning(this, title, text);
        return;
    }

    //然后检查您输入的密码是否正确？
    if((mode == 1 && password != oldPassword) || (mode != 1 && password != newPassword))
    {
        QString title = tr("Critical");
        QString text = tr("Wrong password!"); //密码错误
        QMessageBox::critical(this, title, text);
        return;
    }

    if(mode != 2) settings.setValue("Password", newPassword); //更改或建立密码
    else settings.remove("Password"); //删除Password键
    settings.endGroup();
    accept();
}
