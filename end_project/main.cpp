#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <iterator>
#include <map>

#include "people/Trainer.hpp"
#include "people/Student.hpp"
#include "space/Studio.hpp"

using namespace std;

string trainerFile = "end_project/database/trainer.txt";
string studentFile = "end_project/database/student.txt";
string studioFile = "end_project/database/studio.txt";

string switchFiles(string fileType){
    string file;
    if(fileType == "trainer"){
        file = trainerFile;
    }
    else if(fileType == "student"){
        file = studentFile;
    }
    else if(fileType == "studio"){
        file = studioFile;
    }
    return file;
}

int countPeople(string memberType){
    string file;
    
    file = switchFiles(memberType);
    
    int counter = 0;
    fstream newfile;
    newfile.open(file,ios::in); //open a file to perform read operation using file object
    
    
    if (newfile.is_open()){   //checking whether the file is open
        
        string tp;
        while(getline(newfile, tp)){ //read data from file object and put it into string.
            counter++;
            
        }
        newfile.close(); //close the file object.
    }
    
    return counter;
}

void addNewMember(string &memberType){
    string file = "";
    file = switchFiles(memberType);
    
    //*****ADD NEW OBJECT*****
    Person newPerson;
    Trainer newTrainer;
    Student newStudent;
    string fname, lname, email, telephone, aerialSpeciality;
    string isClubMember;
    cout << "Add new person \n";
    cout << "Give the fname \n";
    cin >> fname;
    cout << "Give the lname \n";
    cin >> lname;
    cout << "Give the email \n";
    cin >> email;
    cout << "Give the telephone \n";
    cin >> telephone;
    
    std::ofstream ofs;
    ofs.open(file, std::ios::out|std::ios::app);
    if(memberType == "student"){
        cout << "is club member? Text - yes, or no\n";
        cin >> isClubMember;
        bool isClubMemberBool;
        if(isClubMember == "yes"){
            isClubMemberBool = true;
        }
        else{
            isClubMemberBool = false;
        }
        
        int id = countPeople(memberType) + 1;
        newStudent.setId(id);
        newStudent.setFirstName(fname);
        newStudent.setLastName(lname);
        newStudent.setEmail(email);
        newStudent.setTelephone(telephone);
        newStudent.setIsClubMember(isClubMemberBool);
        newStudent.print();
        
        ofs << newStudent.getId() << ","
        << newStudent.getFirstName() << ","
        << newStudent.getLastName() << ","
        << newStudent.getEmail() << ","
        << newStudent.getTelephone() << ","
        << newStudent.getIsClubMember() << ";";
        
    }
    else if(memberType == "trainer"){
        cout << "Give the aerial speciality \n ";
        cin >> aerialSpeciality;
        
        int id = countPeople(memberType) + 1;
        newTrainer.setId(id);
        newTrainer.setFirstName(fname);
        newTrainer.setLastName(lname);
        newTrainer.setEmail(email);
        newTrainer.setTelephone(telephone);
        newTrainer.setAerialSpeciality(aerialSpeciality);
        newTrainer.print();
        
        ofs << newTrainer.getId() << ","
        << newTrainer.getFirstName() << ","
        << newTrainer.getLastName() << ","
        << newTrainer.getEmail() << ","
        << newTrainer.getTelephone() << ","
        << newTrainer.getAerialSpeciality() << ";";
    }
    ofs.close();
}

int showTheBestParameterForStudios(string memberType){
    Studio studio;
    vector<Studio> studioVector;
    std::ifstream infile(switchFiles(memberType));
    if (!infile) {
        std::cerr << "Could not open file." << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(infile, line)) {  // Read file line by line.
        std::string field;
        std::vector<std::string> separated_fields;
        std::istringstream iss_line(line);
        while (std::getline(iss_line, field, ',')) { // Split line on the ',' character
            separated_fields.push_back(field);    // Vector containing each field, i.e. name, address...
        }
        separated_fields[0]; // personCapacity
        separated_fields[1]; // area
        separated_fields[2]; // hight
        separated_fields[3]; // name
        separated_fields[4]; // address
        
        studio.setPersonCapacity(stoi(separated_fields[0]));
        studio.setArea(stoi(separated_fields[1]));
        studio.setHight(stoi(separated_fields[2]));
        studio.setName(separated_fields[3]);
        studio.setAddress(separated_fields[4]);
        
        studioVector.push_back(studio);
    }
    int maxPersonCapacity=0;
    string maxPersonCapacityName = "";
    int highestStudio =0;
    string highestStudioName ="";
    for(auto i = studioVector.begin(); i != studioVector.end(); i++){
        if(i->getPersonCapacity() > maxPersonCapacity)
        {
            maxPersonCapacity = i->getPersonCapacity();
            maxPersonCapacityName = i -> getName();
        }
        if(i->getHight() > highestStudio){
            highestStudio = i->getHight();
            highestStudioName = i->getName();
        }
    }
    cout << "Studio " << maxPersonCapacityName << " has space for "<< maxPersonCapacity << " peoples.\n";
    cout <<"Studio "<< highestStudioName << " is " << highestStudio << " m hight.\n" ;
    
    return 1;
}

int main() {
    char choice;
    
    cout << "Welcome by Aerial Arts Studio \n";
    cout << "What do you like to do? \n";
    
    cout << "See how many students/trainer we have - text >A< \n" ;
    cout << "Add new Trainer/Student - text >B<\n" ;
    cout << "Show studio with the best parameters - text >C<\n";
    cout << "Give your answer \n";
    cin >> choice;
    choice = toupper(choice);
    switch(choice) {
        case 'A' :
        {
            cout << "Excellent! \n" ;
            cout << "we have " << countPeople("trainer") << " trainers \n";
            cout << "and " <<  countPeople("student") << " stundets \n";
            break;
        }
        case 'B' :
        {
            cout << "if you would like to add a new trainer, text the word >>trainer<< \n";
            cout <<"if you would like to add a new student, text the word >>student<< \n";
            string typeMember;
            cin >> typeMember;
            addNewMember(typeMember);
            break;
        }
        case 'C' :
        {
            showTheBestParameterForStudios("studio");
            break;
        }
            
        default :
        {
            cout << "Wrong !" << endl;
            break;
        }
            
    }
    return 0;
}
