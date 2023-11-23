#ifndef DIALOGADDSTUDENT_H
#define DIALOGADDSTUDENT_H

#include <QDialog>
#include "student.h"

namespace Ui {
class DialogAddStudent;
}

class DialogAddStudent : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddStudent(QWidget *parent = 0);
    ~DialogAddStudent();

private slots:
    void on_pb_create_clicked();

signals:
    void createdStudent(Student*);

private:
    Ui::DialogAddStudent *ui;
};

#endif // DIALOGADDSTUDENT_H
