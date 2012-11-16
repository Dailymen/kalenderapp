#include "kalender.h"
#include "ui_kalender.h"
#include <QtGui>
#include <QDebug>

kalender::kalender(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kalender)
{

    ui->setupUi(this);
    connect(ui->matiasknapp, SIGNAL(clicked()), this, SLOT(matias()));
}

kalender::~kalender()
{
    delete ui;
}




void kalender::matias()
{
    ui->dager->setText("new Text");
}



void kalender::opprett()
{
    ui->Kontaktinfo

}
