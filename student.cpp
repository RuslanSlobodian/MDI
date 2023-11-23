#include "student.h"

QString Student::getGroup() const
{
    return group;
}

void Student::setGroup(const QString &group)
{
    this->group = group;
}

QString Student::toString()
{
    return Human::toString()
            .append(", group: " + group);
}

Student::Student(QString name, QString group) :
    Human(name), group(group) {
}
