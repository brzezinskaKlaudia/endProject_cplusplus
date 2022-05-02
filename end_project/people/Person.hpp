#include <iostream>
#include <string>
#include <vector>
#ifndef person_H
#define person_H
#pragma once

using namespace std;

class Person{
public:
    //constructor
    Person();
    Person(int  &id, string const &i_firstName, const string &i_lastName, string &i_email, string &i_telephone);
    //destructor
    ~Person();
    
    // setter
    void setId(int &i_id);
    void setFirstName(string &i_firstName);
    void setLastName(string &i_lastName);
    void setEmail(string &i_email);
    void setTelephone(string &i_telephone);
    
    // getter
    int getId();
    string getFirstName();
    string getLastName();
    string getEmail();
    string getTelephone();
    
private:
    int id;
    string firstName;
    string lastName;
    string email;
    string telephone;
};
#endif
