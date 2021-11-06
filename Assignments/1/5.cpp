// Enter one alphabet character (A-Z or a-z) from the keyboard. Check whether it is lower case or upper case
#include <iostream>
using namespace std;
int main()
{
    char val;
    cout << "Enter a letter: ";
    cin >> val;
    if (val >= 'a' and val <= 'z')
    {
        cout << "\nEntered character is lower case";
    }
    else if (val >= 'A' and val <= 'Z')
    {
        cout << "\nEntered character is Upper case";
    }
    else
    {
        cout << "\nEntered character is not an alphabet";
    }
    return 0;
}