
#include "Project.h"

Project::Project(const char* name) : name(name)
{
    specificationDatabase.Init();
}
