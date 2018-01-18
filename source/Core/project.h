#ifndef PROJECT_H
#define PROJECT_H

#include "Source/Core/SpecificationDataBase.h"
#include <QString>

class Project
{
    public:

        explicit Project(const char* name);

        inline const QString& GetName() const { return name; }
        inline SpecificationDataBase const& GetSpecificationDataBase() const { return specificationDatabase; }

        inline void SetName(const char* name) { this->name = name; }

    private:

        QString name;
        SpecificationDataBase specificationDatabase;

};

#endif // PROJECT_H
