#ifndef SETTINGPAGE_H
#define SETTINGPAGE_H

#include <QDialog>
#include "Settings.h"

namespace Ui {
class settingpage;
}
namespace CMS{

class settingpage : public QDialog
{
    Q_OBJECT

public:
    explicit settingpage(Settings &settings, QWidget *parent = nullptr);
    ~settingpage();

private slots:
//    void on_fiveSecOnLoss_toggled(bool checked);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Settings &settings;
    Ui::settingpage *ui;
    void setupSettings();
//    struct five_sec_settings {
//        bool on_loss;
//        bool auto_start;
//    };

};

} //namespace CMS

#endif // SETTINGPAGE_H
