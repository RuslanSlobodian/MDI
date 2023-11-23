#ifndef STUDENT_H
#define STUDENT_H
#include "human.h"

class Student : public Human
{
    QString group;
public:
    Student(QString name, QString group);

    QString getGroup() const;
    void setGroup(const QString &group);
    QString toString() override;
};

#endif // STUDENT_H
