#include <iostream>
#include <string>
#include <vector>
#include "Person.hpp"

using namespace std;

class Student: public Person{
public:
    //constructor
    Student();
    Student(bool &i_isClubMember);
    Student(Person &i_src, bool &i_isClubMember);
    
    //destructor
    ~Student();
    
    // setter
    void setIsClubMember(bool &i_isClubMember);
    
    // getter
    bool getIsClubMember();
    
    void print();
        
    
private:
    bool isClubMember;
};
