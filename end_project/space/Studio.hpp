#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Studio{
public:
    //constructor
    Studio();
    Studio(int i_personCapacity, int i_area, int i_hight, string &i_address, string &i_name);
    Studio &operator=(const Studio &i_src);
    
    //destructor
    ~Studio();
    
    // setter
    void setPersonCapacity(int i_personCapacity);
    void setArea(int i_area);
    void setHight(int i_hight);
    void setAddress(string &i_address);
    void setName(string &i_name);
    
    // getter
    int getPersonCapacity();
    int getArea();
    int getHight();
    string getAddress();
    string getName();

    
private:
    int personCapacity;
    int area;
    int hight;
    string name;
    string address;
};
