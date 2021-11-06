// 3. Write a program to find maximum of two numbers. Max() is an inline function.
#include <iostream>
using namespace std;

inline int max(int a, int b) {
    return a>b?a:b;
}
int main() {

    int a, b;
    cout << "Enter 2 Numbers: ";
    cin >> a >> b;
    cout << "The Maximum Number is: " << max(a,b);
}