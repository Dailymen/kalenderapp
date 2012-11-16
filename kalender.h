#ifndef KALENDER_H
#define KALENDER_H

#include <QMainWindow>
#include <QWidget>
#include <QtGui>

namespace Ui {
class kalender;
}

class kalender : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit kalender(QWidget *parent = 0);
    ~kalender();
    
private:
    Ui::kalender *ui;

signals:


private slots:
    void matias();
    void opprett();
};

#endif // KALENDER_H
