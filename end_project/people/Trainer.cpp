#include "Trainer.hpp"

using namespace std;

Trainer::Trainer(){
    
}

Trainer::Trainer(string i_aerialSpeciality )
    : aerialSpeciality(i_aerialSpeciality)
{
    
}

Trainer::Trainer(Person &i_src, string i_aerialSpeciality )
    : Person(i_src), aerialSpeciality(i_aerialSpeciality)
{
    
}

Trainer::~Trainer()
{
    
}


// setter
void Trainer::setAerialSpeciality(string i_aerialSpeciality){
    aerialSpeciality = i_aerialSpeciality;
}


// getter

string Trainer::getAerialSpeciality(){
    return aerialSpeciality;
}
