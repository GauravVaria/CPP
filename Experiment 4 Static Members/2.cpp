// 1. Write a program to calculate percentage of a student by declaring function grade() as public in a class student.
// Data members are rollno, mark1, mark2 and grade declare as by default access specifier. count is declared as static variable.
// The value of count is assigned to rollno.
// Create two objects as S1 and S2 and values  of  data members of  these  objects  are  entered  runtime.
// Display  count  of object  created  and roll number.
// Also  print  the marksand  percentage  of  students  and  create  additional  member  functions  if needed.
#include <iostream>
using namespace std;

class student
{
    int rollno, mark1, mark2;

public:
    static int count;
    void getData()
    {
        cout << "\nEnter Marks 1 and 2: ";
        cin >> mark1 >> mark2;
    }
    void grade()
    {

        double total, percentage;
        total = mark1+mark2;
        percentage = total / 200 * 100;
        count++;
        rollno = count;
        cout << "\nRoll No: " << rollno;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage;
    }
};
int student::count = 0;
int main()
{
    student s1, s2;
    s1.getData();
    s1.grade();
    s2.getData();
    s2.grade();
    return 0;
}

