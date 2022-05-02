#include "Workshop.hpp"

using namespace std;

Workshop::Workshop(){
    
}
Workshop::Workshop( Studio i_studio, string i_name, Trainer  i_trainer)
  : studio(i_studio),
    name(i_name),
    teacher(i_trainer)
{
    
}

Workshop::~Workshop()
{
    
}

// setter
void Workshop::setName(string i_name){
    name= i_name;
}

void Workshop::setStudio(Studio i_studio)
{
    studio = i_studio;
}

void Workshop::setTeacher(Trainer i_teacher)
{
    teacher = i_teacher;
}


// getter

string Workshop::getName()
{
    return name;
}

Studio Workshop::getStudio(){
    return studio;
}

Trainer Workshop::getTeacher(){
    return teacher;
}


