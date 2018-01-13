
#include "Project.h"

Project::Project(const char* name) : name(name)
{
    database.Init();
}
