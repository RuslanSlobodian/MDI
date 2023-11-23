#ifndef DIALOGSTUDENTS_H
#define DIALOGSTUDENTS_H

#include <QDialog>
#include "student.h"

namespace Ui {
class DialogStudents;
}

class DialogStudents : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStudents(QWidget *parent = 0);
    ~DialogStudents();

public slots:
    void on_cretedStudent(Student* student);

private:
    Ui::DialogStudents *ui;
    QVector<Student*> students;
};

#endif // DIALOGSTUDENTS_H
