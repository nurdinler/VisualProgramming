#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDate>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_message_clicked();

    void on_pushButton_goodbye_clicked();

    void on_pushButton_amnesia_clicked();

    void on_pushButton_amnesia_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
