// Write a program in C++ program to demonstrate simple inheritance.
// Students are expected to develop simple program to show simple inheritance.

#include <iostream>
class animal
{
public:
    int legs = 4;
    int tail = 1;
};

class dog : public animal
{
public:
    void doge()
    {
        std::cout << "Dog has " << legs << " legs and " << tail << " tail";
    }
};

int main()
{
    dog obj1;
    obj1.doge();
    return 0;
}