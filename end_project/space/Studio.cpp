#include "Studio.hpp"

using namespace std;


int personCapacity;
int area;
int hight;
string name;
string address;


Studio::Studio(){
    
}
Studio::Studio( int i_personCapacity, int i_area, int  hight, string i_name,  string i_address)
  : personCapacity(i_personCapacity),
    area(i_area),
    hight(hight),
    name(i_name),
    address(i_address)
{
    
}

Studio::~Studio()
{
    
}

// setter
void Studio::setPersonCapacity(int i_personCapacity){
    personCapacity= i_personCapacity;
}

void Studio::setArea(int i_area)
{
    area = i_area;
}

void Studio::setName(string i_name)
{
    name = i_name;
}

void Studio::setHight(int i_hight)
{
    hight = i_hight;
}

void Studio::setAddress(string i_address)
{
    address = i_address;
}



// getter

int Studio::getPersonCapacity()
{
    return personCapacity;
}

int Studio::getArea(){
    return area;
}

string Studio::getName(){
    return name;
}

string Studio::getAddress(){
    return address;
}

int Studio::getHight(){
    return hight;
}
