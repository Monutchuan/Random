#ifndef HEADERDIALOG_H
#define HEADERDIALOG_H

#include <QDialog>

namespace Ui {
class HeaderDialog;
}

class HeaderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HeaderDialog(QWidget *parent = nullptr);
    ~HeaderDialog();

private:
    Ui::HeaderDialog *ui;
};

#endif // HEADERDIALOG_H
