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
    Workshop(const Studio *i_studio, string &i_name, const Trainer *i_teacher);
    
    //destructor
    ~Workshop();
    
    // setter
    void setStudio(const Studio *i_studio);
    void setName(string &i_name);
    void setTeacher(const Trainer *i_teacher);
    
    // getter
    Studio getStudio();
    string getName();
    Trainer getTeacher();
    
private:
    const Studio *studio;
    string name;
    const Trainer *teacher;
    
};
