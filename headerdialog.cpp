#include "headerdialog.h"
#include "ui_headerdialog.h"

HeaderDialog::HeaderDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HeaderDialog)
{
    ui->setupUi(this);
}

HeaderDialog::~HeaderDialog()
{
    delete ui;
}
