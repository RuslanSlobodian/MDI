#include "dialogaddstudent.h"
#include "ui_dialogaddstudent.h"
#include <QMessageBox>

DialogAddStudent::DialogAddStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddStudent)
{
    ui->setupUi(this);
}

DialogAddStudent::~DialogAddStudent()
{
    delete ui;
}

void DialogAddStudent::on_pb_create_clicked()
{
    if(ui->le_group->text().isEmpty() || ui->le_name->text().isEmpty()) {
        QMessageBox::warning(this, QString("Помилка!"), QString("Заповніть усі поля!"));
    }
    else{
        Student* student = new Student(ui->le_name->text(),ui->le_group->text());
        emit createdStudent(student);
        this->accept();
    }
}
