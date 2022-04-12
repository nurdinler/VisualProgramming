#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //This button will write your name when clicked xoxo
    qDebug() << "Nur";
    qDebug() << "OMG \n...magic.";

}


void MainWindow::on_pushButton_message_clicked()
{
    //QMessageBox::information(this,"Header","Message","ResponceButton1","ResponceButton2");
    //this:Will run in this form,
    //#include <QMessageBox> to header doc
    //when using a function of a class : nameofclass::functionname
    QMessageBox::information(this,"Here is your message","Ruyamda Buluttum - Can Bonomo Demet Evgar" ,
                             "Okay","Okay");


}


void MainWindow::on_pushButton_goodbye_clicked()
{
    QMessageBox::information(this,"Message","Goodbye...","See ya");

}


void MainWindow::on_pushButton_amnesia_clicked()
{
     //QMessageBox::information(this,"Cr date",QDate::currentDate().toString(),"k");
    // QDate::currentDate() : will show you current date as int format.
    // #include <QDate>
    qDebug()<< "Cr Date: " + QDate::currentDate().toString();
    QMessageBox::information(this,"Info","Check the console","Whatever");
}


void MainWindow::on_pushButton_amnesia_2_clicked()
{
    int num = rand()% 220308;
    QMessageBox::information(this,"SHAGDSJGDJ",""+QString::number(num) + "\nalso check the console","Insane isn't it?");
    qDebug()<<num;

}

