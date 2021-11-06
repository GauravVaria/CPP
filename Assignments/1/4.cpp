// 4) Write a program to check entered year is leap year or not.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int val;
    cout << "Enter a Year: ";
    cin >> val;
    if (val % 4 == 0)
    {
        cout << "\nIt is a leap year";
    }
    else
    {
        cout << "\nIt is not a leap year";
    }
    return 0;
}
