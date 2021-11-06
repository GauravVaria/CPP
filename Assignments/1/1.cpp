// Write a program to find female to male ratio
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float male, female, ratio;
    cout << "Enter number of Females and Males: ";
    cin >> female >> male;
    ratio = female / male;
    cout << "\nRatio is: " << ratio << " Females per Male.";
    return 0;
}