#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this); //metodo
    QPixmap pix(":/images/img/ROS_INDUSTRIAL.png");
    ui->label->setPixmap(pix);
//    connect(ui->verticalSlider,SIGNAL(valueChanged(int))
//            ,ui->progressBar,SLOT(setValue(int)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap pix(":/images/img/AS.png");
    ui->label->setPixmap(pix);

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::critical(this,tr("Information Title"),tr("This is the message"));
}

void MainWindow::on_pushButton_3_clicked()
{

    secdialog= new SecDialog(this);
    secdialog->show();
}


