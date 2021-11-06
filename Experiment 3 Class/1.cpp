// 1.Write  a  program  to calculate  area  and  volume  by  declaring  functions  
// calculatearea()  and calculatevolume() as public in a class room. 
// Data members are length, heightandbreadth declare as by default access specifier. 
// Create an object room1 and values of length, height and breadth of that objects are 42.3, 30.8 and 19.2 respectively. 
// Print the area and volume of the roomand create additional member functionsand data membersif needed.
#include <iostream>
using namespace std;

class room
{
public:
    double length, breadth, height;
    double calculatearea();
    double calculatevolume();
};

double room::calculatearea() {

    return length*breadth;
}

double room::calculatevolume() {

    return length*breadth*height;
}

int main()
{
    room room1;
    room1.length = 42.3;
    room1.height = 30.8;
    room1.breadth = 19.2;

    cout << "Area of room is " << room1.calculatearea() << endl;
    cout << "Volume of room is " << room1.calculatevolume() << endl;
    
    return 0;
}
