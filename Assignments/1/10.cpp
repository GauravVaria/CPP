// Write a program that asks the user to enter two integers. Display the largest number between them.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter 2 Numbers: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is Larger";
    }
    else if (a < b)
    {
        cout << b << " is larger";
    }
    else
    {
        cout << "both are equal";
    }
    return 0;
}