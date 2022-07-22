#ifndef SETTINGPAGE_H
#define SETTINGPAGE_H

#include <QDialog>

namespace Ui {
class settingpage;
}

class settingpage : public QDialog
{
    Q_OBJECT

public:
    explicit settingpage(QWidget *parent = nullptr);
    ~settingpage();

private:
    Ui::settingpage *ui;
};

#endif // SETTINGPAGE_H
