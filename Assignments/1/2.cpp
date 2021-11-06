// 2) Write a program to check whether entered number is divisible by 2 and 4
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int val;
    cout << "Enter a Number: ";
    cin >> val;
    if ((val % 2 == 0) && (val % 4 == 0))
    {
        cout << "\nIt is divisible by 2 and 4";
    }
    else
    {
        cout << "\nIt is Not divisible by 2 and 4";
    }
    return 0;
}