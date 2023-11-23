#include "dialogstudents.h"
#include "ui_dialogstudents.h"
#include <QListWidgetItem>

DialogStudents::DialogStudents(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStudents)
{
    ui->setupUi(this);
}

DialogStudents::~DialogStudents()
{
    delete ui;
}

void DialogStudents::on_cretedStudent(Student *student)
{
//    students.push_back(student);
    QListWidgetItem* item = new QListWidgetItem(student->toString());
    ui->listWidget->addItem(item);
}
