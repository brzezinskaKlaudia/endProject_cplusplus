#include "Student.hpp"

using namespace std;

Student::Student(){}

Student::Student( bool i_isClubMember )
: isClubMember(i_isClubMember)
{
    
}

Student::Student(Person &i_src, bool i_isClubMember )
: Person(i_src), isClubMember(i_isClubMember)
{
    
}

Student::~Student()
{
    
}

// setter
void Student::setIsClubMember(bool i_isClubMember){
    isClubMember = i_isClubMember;
}


// getter

bool Student::getIsClubMember(){
    return isClubMember;
}
