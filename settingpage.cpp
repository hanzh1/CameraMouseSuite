#include "settingpage.h"
#include "ui_settingpage.h"

settingpage::settingpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingpage)
{
    ui->setupUi(this);
}

settingpage::~settingpage()
{
    delete ui;
}
