#include <iostream>
#include <string>
#include <vector>
#include "../people/Trainer.hpp"
#include "Studio.hpp"
using namespace std;

class Workshop{
public:
    //constructor
    Workshop();
    Workshop(Studio i_studio, string i_name, Trainer i_teacher);
    
    //destructor
    ~Workshop();
    
    // setter
    void setStudio(Studio i_studio);
    void setName(string i_name);
    void setTeacher(Trainer i_teacher);
    
    // getter
    Studio getStudio();
    string getName();
    Trainer getTeacher();
    
private:
    Studio studio;
    string name;
    Trainer teacher;
    
};
