// 1. Write a program to calculate the volume of cube, cylinder and rectangular box.
// Use  the  concept  of  function  overloading.
// Declare  volume()  with  int,  double  and  long  type  as shown:
// Int volume(int s) for cube
// Double volume(double r, int h) for cylinder
// Long volume(long r, int b, int h) for rectangular box
#include <iostream>
using namespace std;


int volume(int s) {

    return s*s*s;
}
double volume(double r, int h) {

    return 3.14*r*r*h;
}
long volume(long r, int b, int h) {

    return r*b*h;
}

int main(int argc, char const *argv[])
{
    cout << " Cube: " << volume(5);
    cout << " Cylinder: " << volume(5.75,6);
    cout << " Rectangular Box: " << volume(5.55,5,5);
    cout << " S059 ";
    return 0;
}
