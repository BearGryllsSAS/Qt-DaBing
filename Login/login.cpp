#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    setFixedSize(430, 510);
}

Login::~Login()
{
    delete ui;
}
