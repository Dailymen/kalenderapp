#include "kalender.h"
#include "ui_kalender.h"

kalender::kalender(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kalender)
{
    ui->setupUi(this);

}

kalender::~kalender()
{
    delete ui;
}
