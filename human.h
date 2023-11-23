#ifndef HUMAN_H
#define HUMAN_H

#include <QString>

class Human
{
protected:
    QString name;
public:
    Human(QString name);
    QString getName() const;
    void setName(const QString &name);
    virtual QString toString();
};

#endif // HUMAN_H
