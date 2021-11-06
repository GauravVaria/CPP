// Write a program to calculate area by declaring functions calculatearea()(length x breadth) as public in a class room. 
// Data  members  are  length,  height  and  breadth  declare  as  by  default  access  specifier. 
// Declare  a constructor having no arguments. Create an object room1 and 
// values of length, height and breadth of that objects are 40, 30 and 15 respectively assigned through constructor.
// Print “The object is created” through constructor and the area of the room.
// Create additional member functions and data members if needed.
#include <iostream>
using namespace std;
class room
{
private:
    int length,breadth,height;
public:
    int calculatearea() {
        return length*breadth*height;
    }
    room() {
        length = 40;
        height = 30;
        breadth = 15;
        cout << "The object is created" << endl;      
    }
};  

int main()
{
    room room1;
    cout << "Area of room: " << room1.calculatearea();
    return 0;
}