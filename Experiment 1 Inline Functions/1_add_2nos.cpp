#include <iostream>
using namespace std;

// 1. Write a program to add 2 numbers. Add() must be declared as inline function.

inline int add(int x, int y){
    return x+y;
}

int main(int argc, char const *argv[])
{
    cout << "5+9 = " << add(5,9) << endl;
    return 0;
}
