// Write a program that asks the user to enter two integers, print their sum, product, difference and division.
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    c=a+b;
    cout << "\nSum is: " << c;
    c = a*b;
    cout << "\nProduct is: " << c;
    c = a-b;
    cout << "\nDifference is: " << c;
    c = a/b;
    cout << "\nDivision is: " << c;
}