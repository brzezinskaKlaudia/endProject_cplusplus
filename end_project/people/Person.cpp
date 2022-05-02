#include "Person.hpp"

using namespace std;

Person::Person(){
    
}
Person::Person( int   &i_id, const string &i_firstName, const string &i_lastName, string &i_email,  string &i_telephone)
  : id(i_id),
    firstName(i_firstName),
    lastName(i_lastName),
    email(i_email),
    telephone(i_telephone)
{
   // g_personList.push_back(this);
}

Person::~Person()
{
    
}

// setter
void Person::setId(int &i_id){
    id = i_id;
}

void Person::setFirstName(string &i_firstName)
{
    firstName = i_firstName;
}

void Person::setLastName(string &i_lastName)
{
    lastName = i_lastName;
}

void Person::setEmail(string &i_email)
{
    email = i_email;
}

void Person::setTelephone(string &i_telephone)
{
    telephone = i_telephone;
}



// getter

int Person::getId()
{
    return id;
}

string Person::getFirstName(){
    return firstName;
}

string Person::getLastName(){
    return lastName;
}

string Person::getEmail(){
    return email;
}

string Person::getTelephone(){
    return telephone;
}
