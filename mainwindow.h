#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

#include "dialogaddstudent.h"
#include "dialogstudents.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pb_createStudent_clicked();
    void on_pb_createTeacher_clicked();
    void on_pb_showStudentWindow_clicked();
    void on_pb_showTeacherWindow_clicked();

private:
    Ui::MainWindow* ui;
    DialogAddStudent* dialogAddStudent;
    DialogStudents* dialogStudents;
};

#endif // MAINWINDOW_H
