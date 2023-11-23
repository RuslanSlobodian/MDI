#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dialogAddStudent = new DialogAddStudent();
    dialogAddStudent->setModal(true);

    dialogStudents = new DialogStudents();
    dialogStudents->setModal(false);

    connect(dialogAddStudent,&DialogAddStudent::createdStudent,dialogStudents,&DialogStudents::on_cretedStudent);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete this->dialogAddStudent;
}

void MainWindow::on_pb_createStudent_clicked()
{
    dialogAddStudent->show();
}

void MainWindow::on_pb_createTeacher_clicked()
{
    QMessageBox::information(this, QString("В розробці!"), QString("Дане вікно на стадії розробки!"));
}

void MainWindow::on_pb_showStudentWindow_clicked()
{
    dialogStudents->show();
}

void MainWindow::on_pb_showTeacherWindow_clicked()
{
    QMessageBox::information(this, QString("В розробці!"), QString("Дане вікно на стадії розробки!"));
}
