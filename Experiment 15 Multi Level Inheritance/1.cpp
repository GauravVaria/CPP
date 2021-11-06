// Write  a  program  in  C++  program  to  read  and  print  student’s  information  using multilevelinheritance.
// Create  a  parent  class student.
// In  that  class  private  data  members  are name[10], rollnoand public member functions are void getbasicinfo(void)and
// void displaybasicinfo(void).Inherit child class testpublically.
// Data members are mark1, mark2 and public member functions are void get_marks(int m1, int m2) and void put_marks(void).
// Inherit child class resultpublically. Public data member are total. Public memberfunction isvoid display(void).
// Create object of resultclass std1.  Call functions using dot (.) operator.
// Create additional member functions if needed.
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;

public:
    void getbasicinfo(void)
    {
        cout << "\nEnter Name and Roll No: ";
        cin >> name >> rollno;
    }
    void displaybasicinfo(void)
    {
        cout << "\nName: " << name << "\t Roll No: " << rollno;
    }
};

class test : public student
{
public:
    float mark1, mark2;
    void getmarks(int m1, int m2)
    {
        mark1 = m1;
        mark2 = m2;
    }
    void putmarks(void)
    {
        cout << "\nMark 1: " << mark1 << "\tMark 2: " << mark2;
    }
};

class result : public test
{
public:
    float total;
    void display(void)
    {
        total = mark1 + mark2;
        cout << "\nTotal Marks: " << total;
    }
};
int main()
{
    result std1;
    std1.getbasicinfo();
    std1.displaybasicinfo();
    std1.getmarks(93, 59);
    std1.putmarks();
    std1.display();
    return 0;
}