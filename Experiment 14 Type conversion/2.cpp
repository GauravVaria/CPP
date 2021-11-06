// Write a program in C++ program to covert an object from one class to another class.
// Create  a  class feet.
// In  that  class  private  data  members  are ft  and  inchand  public  member functions  areconstructor
// with  2  parameter  and default  constructor, int convertintoinches() and  void display().
// Create a class inches. In that class private data member is inchand public members are default constructor,
// void operator=(feet f1) and void display() Create object of feet class f1and I1 of inch class.
// Call constructor for feet class with 3 and 10. Convert object of f1 into I1 using I1=f1.
// Create additional member functions if needed.
#include <iostream>
using namespace std;

class feet
{
    int feeet, inch;

public:
    feet(int a, int b)
    {
        feeet = a;
        inch = b;
    }
    feet()
    {
        cout << "object created\n";
    }
    int convertintoinches()
    {
        return (feeet * 12) + inch;
    }
    void display()
    {
        cout << feeet << " feet and " << inch << " inches";
    }
};
class inch
{
    int inch;

public:
    void inches()
    {
        inch = 0;
    }
    void operator=(feet f1)
    {
        inch = f1.convertintoinches();
    }
    void display()
    {
        cout << "\nTotal inches: " << inch;
    }
};
int main()
{
    feet();
    feet f1(3, 10);
    f1.display();
    inch i1;
    i1 = f1;
    cout << "\nafter conversion:";
    i1.display();
    return 0;
}