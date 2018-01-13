#ifndef PROJECT_H
#define PROJECT_H


#include "Source/Core/DataBase.h"
#include <QString>

class Project
{
    public:

        explicit Project(const char* name);

        inline const QString& GetName() const { return name; }
        inline DataBase const& GetDataBase() const { return database; }

        inline void SetName(const char* name) { this->name = name; }

    private:

        QString name;
        DataBase database;

};

#endif // PROJECT_H
