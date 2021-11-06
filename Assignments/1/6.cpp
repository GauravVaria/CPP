// Write a program to check whether a character is alphabet or not.
#include <iostream>
using namespace std;
int main()
{
    char val;
    cout << "Enter a character: ";
    cin >> val;
    if (val >= 'a' and val <= 'z')
    {
        cout << "\nEntered character is alphabet";
    }
    else if (val >= 'A' and val <= 'Z')
    {
        cout << "\nEntered character is alphabet";
    }
    else
    {
        cout << "\nEntered character is not an alphabet";
    }
    return 0;
}