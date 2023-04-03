#ifndef TALLETUSDLL_H
#define TALLETUSDLL_H

#include <QDialog>
#include "TalletusDLL_global.h"
#include <QDebug>

namespace Ui {
class Talletus;
}

class TALLETUSDLL_EXPORT Talletus : public QDialog
{
    Q_OBJECT

public:
    Talletus(QWidget *parent = nullptr);
    ~Talletus();

public slots:
    void clickHandlerEnter();

private:
    Ui::Talletus *ui;
};

#endif // TALLETUSDLL_H
