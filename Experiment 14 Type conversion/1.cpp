// Write a program in C++ program to convert class object to int type.Refer Example given here below.
// Convert a data member’s i.e kilo and gram of the object w1of class weight into int gram type.
#include <iostream>
using namespace std;

class weight
{
    int kilo, gram;

public:
    weight(int, int);
    operator int();
}; 
weight::weight(int a, int b)
{
    kilo = a;
    gram = b;
}
weight::operator int()
{
    cout << "Class to basic type:";
    return (kilo * 1000 + gram);
}
int main()
{
    int gram;
    weight w1(2, 500);
    gram = w1;
    cout << "\n Conversion to: " << gram << " gram";
    return 0;
}