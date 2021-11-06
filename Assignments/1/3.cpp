// 3) Write a program to check whether the entered number is divisible by 4 or 5.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int val;
    cout << "Enter a Number: ";
    cin >> val;
    if ((val % 4 == 0) or (val % 5 == 0))
    {
        cout << "\nIt is divisible by 4 or 5";
    }
    else
    {
        cout << "\nIt is Not divisible by 4 or 5";
    }
    return 0;
}