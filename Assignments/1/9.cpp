// Write a program that asks the user to enter a number. Check whether the entered number is even or odd.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int val;
    cout << "Enter a number: ";
    cin >> val;
    if (val%2==0)
    {
        cout << "It is even";
    }
    else{
        cout << "It is odd";
    }
    return 0;
}
