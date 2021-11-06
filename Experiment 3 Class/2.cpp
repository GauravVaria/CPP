// 1. Write a program to calculate percentage of a student by declaring function grade()as public in a class student. 
// Data members are rollno, mark1, mark2 and grade declare as by default access specifier.  
// Create two  objects  as S1  and  S2 and  values  of data  members of  these objects  are entered runtime. 
// Print the details of students and percentage of students and create additional member functions if needed.
#include <iostream>
using namespace std;

class student {

public:
        double grade(float mark1, float mark2);
        float rollno, mark1, mark2;
};

double student::grade(float mark1, float mark2){

    double percentage;
    percentage = ((mark1 + mark2)/200)*100;
    return percentage;
}

int main(int argc, char const *argv[])
{
    student s1;
    student s2;

    cout << "Enter Students 1's Roll No, Mark1 and Mark2: " << endl;
    cin >> s1.rollno >> s1.mark1 >> s1.mark2;

    cout << "Enter Students 2's Roll No, Mark1 and Mark2: " << endl;
    cin >> s2.rollno >> s2.mark1 >> s2.mark2;

    cout << "Student 1 details:" << endl;
    cout << "Roll Number: " << s1.rollno << " Percentage: " << s1.grade(s1.mark1, s1.mark2) <<endl;
    cout << "Student 2 details:" << endl;
    cout << "Roll Number: " << s2.rollno << " Percentage: " << s2.grade(s2.mark1, s2.mark2) <<endl;
    return 0;
}
