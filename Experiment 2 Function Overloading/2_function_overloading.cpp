// 2. Write a program to add the numbers passed to the add() using function overloading method.
// Use following prototypes:
// Int add(int a, int b);
// Int add(int a, int b, int c);
// Double add(double x, double y);
// Double add(int p, double q);
// Double add(double p, int q);
// Pass following values to add():
// Cout<<add(5,10);
// Cout<<add(15,12.5);
// Cout<<add(14.5,13.8);
// Cout<<add(5,10,15);
// Cout<<add(1.5,8);

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}
int add(int a, int b, int c) {
    return a+b+c;
}
double add(double x, double y) {
    return x+y;
}
double add(int p, double q) {
    return p+q;
}
double add(double p, int q) {
    return p+q;
}

int main(int argc, char const *argv[])
{
    cout << add(5,10) << endl;
    cout << add(15,12.5) << endl;
    cout << add(14.5,13.8) << endl;
    cout << add(5,10,15) << endl;
    cout << add(1.5,8) << endl;
    cout << " S059 ";
    return 0;
}

