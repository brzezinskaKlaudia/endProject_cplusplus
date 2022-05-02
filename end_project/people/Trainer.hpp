#include <iostream>
#include <string>
#include <vector>
#include "Person.hpp"

using namespace std;

class Trainer: public Person{
public:
    //constructor
    Trainer();
    Trainer(string i_aerialSpeciality);
    Trainer(Person &i_src, string i_aerialSpeciality);
    
    //destructor
    ~Trainer();
    
    // setter
    void setAerialSpeciality(string i_aerialSpeciality);
    
    // getter
    string getAerialSpeciality();
    
private:
    string aerialSpeciality;
};
