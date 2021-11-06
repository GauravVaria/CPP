// Write a program to calculate sum of a student marks by declaring function sum()as public in a class student. 
// Data members are mark1, mark2 and Totaldeclare as by default access specifier. 
// Create a constructor in a class with two arguments of type int and destructor. 
// Create two objects asS1 and S2and values of data members mark1 and mark2of theseobjects are entered runtime. 
// Call the constructor using those values and print “The object is created”. Calculate and print the total  marks  of  students.  
// At the end print “The object is destroyed”. 
// Create additional member functions if needed.

#include <iostream>
using namespace std;

class student
{
    int mark1;
    int mark2;
    int total;
    public:
    
    
    void getdata(int x,int y)
    {
        cout<<"Enter the marks 1"<<endl;
        cin>>mark1;
        cout<<"Enter the marks 2"<<endl;
        cin>>mark2;
    }
    
    void sum()
    {
        total=mark1+mark2;
        cout<<"Total marks are: "<<total<<endl;
    }
    
    
    student(int x,int y)
    {
        mark1=x;
        mark2=y;
        cout<<"The object is created"<<endl;
    }
    
    ~student()
    {
        cout<<"The object is destroyed"<<endl;
    }
    
};

int main()
{
    int x,y;
    student s1(x,y);
    s1.getdata(x,y);
    student s2(x,y);
    s2.getdata(x,y);
    s1.sum();
    s2.sum();
    

    return 0;
}