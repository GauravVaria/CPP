// Write a program to calculate area by declaring functions calculatearea()(length x breadth) as public in a class room. 
// Data members are length, height and breadth declare as by default access specifier. 
// Declare a constructor having no arguments and destructor. 
// Create an object room1 and values  of  length,  height  and  breadth  of  that  objects  are  40,30  and  15respectively
// assigned through constructor.Print “The object is created” through constructor and the area of the room. 
// At the end print “The object is destroyed”. 
// Create additional member functions and data members if needed.

#include <iostream>
using namespace std;

class room {
    int length,breadth,height;
    public:
        int calculatearea()
        {
            return length*breadth*height;
        }

    room() {
        cout<<"The object is created"<<endl;
        length=40;
        breadth=15;
        height=30;
    }
    
    ~room() {
        cout<<endl;
        cout<<"The object is destroyed"<<endl;
    }
};

int main() {
    room c;
    cout<<c.calculatearea();
    return 0;
}