// Write a program that asks the user to enter a number. Check whether the entered number is Positive or Negative
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int val;
    cout << "Enter a Number";
    cin >> val;
    if (val >= 0)
    {
        cout << "\nNumber is Positive";
    }
    else
    {
        cout << "\nNumber is Negative";
    }
    return 0;
}