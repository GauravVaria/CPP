// Write a program to calculate area and volume by declaring two friend functions calculatearea() and calculatevolume() as public 
// in a class room. Data members are length, height and breadth declare as by default access specifier. 
// Create an object room1 and values of length, height and breadth of that objects are 42.3, 30.8 and 19.2  respectively.  
// Print  the  area  and  volume  of  the  room  and  create  additional  member functions and data members if needed.

#include <iostream>
using namespace std;

class Room {
    double length;
    double breadth;
    double height;

   public:
    friend double calculateArea() {
        return length * breadth;
    }

    friend double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    int l,b,h;
    Room room1;
    

    cout << "Area of Room =  " << calculateArea() << endl;
    cout << "Volume of Room =  " << calculateVolume() << endl;

    return 0;
}