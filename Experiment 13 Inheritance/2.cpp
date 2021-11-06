// Write a program in C++ program to read and print student’s information using two classes and simple inheritance.
// Create a parent class student.
// In that class private data members are name[10], age, gender and
// public  member  functions  are void  getbasicinfo(void)and   void  displaybasicinfo(void).
// Inherit child class result publically. Public data member are total marks and percentage.
// Public member function are void getresult(void) and void putresult(void).Create object of child class std1.
// Invoke  functions  to  read  and  print  student’s  basic  and  result  information.
// Create additional member functions if needed.
#include <iostream>
using namespace std;
class student
{
    char gender;
    string name;
    int age;

public:
    void getbasicinfo(void)
    {
        cout << "Enter Name, Age, Gender (M/F) ";
        cin >> name >> age >> gender;
    }
    void displaybasicinfo(void)
    {
        cout << "\nName: " << name << "\nAge: " << age << "\nGender: " << gender;
    }
};

class result : public student
{
public:
    float mark1, mark2, totalmarks, percentage;
    void getresult(void)
    {
        cout << "\nEnter Marks 1 and 2: ";
        cin >> mark1 >> mark2;
    }
    void putresult(void)
    {
        totalmarks = mark1 + mark2;
        percentage = totalmarks / 200;
        percentage = percentage * 100;
        cout << "Total Marks: " << totalmarks << "\nPercentage: " << percentage;
    }
};

int main()
{
    result std1;
    std1.getbasicinfo();
    std1.displaybasicinfo();
    std1.getresult();
    std1.putresult();
    return 0;
}