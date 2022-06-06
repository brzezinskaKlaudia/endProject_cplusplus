#include <iostream>
#include <string>
#include <vector>
#include "Person.hpp"

using namespace std;

class Trainer: public Person{
public:
    //constructor
    Trainer();
    Trainer(string &i_aerialSpeciality);
    Trainer(Person &i_src, string &i_aerialSpeciality);
    Trainer &operator=(const Trainer &i_src);
    //destructor
    ~Trainer();
    
    // setter
    void setAerialSpeciality(string &i_aerialSpeciality);
    
    // getter
    string getAerialSpeciality();
    
    void print()
        {
              cout << ">>New student added\n";
        }
    
private:
    string aerialSpeciality;
};
