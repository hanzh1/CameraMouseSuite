#include "settingpage.h"
#include "ui_settingpage.h"
#include <QWidget>

namespace CMS{

settingpage::settingpage(Settings &settings, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingpage),
    settings(settings)

{
    ui->setupUi(this);
    setupSettings();

}

settingpage::~settingpage()
{
    delete ui;
}

void settingpage::setupSettings(){
    connect(ui->fiveSecOnLoss, SIGNAL(toggled(bool)), &settings, SLOT(setFiveSecOnLoss(bool)));
}


//void settingpage::on_fiveSecOnLoss_toggled(bool checked)
//{
//  connect(ui->fiveSecOnLoss, SIGNAL(toggled(bool)) )
//}


} //namespace CMS

