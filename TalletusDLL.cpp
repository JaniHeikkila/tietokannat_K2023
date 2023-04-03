#include "TalletusDLL.h"
#include "TalletusDLL_global.h"

Talletus::Talletus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Talletus)
{
    qDebug()<<"DLL:n konstruktorissa";

    ui->setupUi(this);

    connect(ui->buttonEnter, SIGNAL(clicked()),
            this, SLOT(clickHandlerEnter()));
}

Talletus::~Talletus()
{
    qDebug()<<"DLL:n desktruktorissa";
    delete ui;
}

void Talletus::clickHandlerEnter()
{
    qDebug()<<"DLL:n clickHandlerEntterissa";
}
