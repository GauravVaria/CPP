// 1. Write a program to display value of the static members x and y using object and class.
// Declare a class having name Demo. In the class Demo, int variable x and y are declared as static.
// X and y are initialized to 10  and  20  respectively.
// In  class  Demo,  static  member  function  display()  will  print  the  value  of  x  and  y.
// Create  one  object  of  class  Demo.  Access  static  member  function  display()  using  class  name  and  object name.
// Observe the output.

#include <iostream>
using namespace std;

class Demo
{
public:
    static int x, y;
    static void display()
    {
        cout << "X = " << x << " Y = " << y << endl;
    }
};
int Demo::x = 10;
int Demo::y = 20;

int main(int argc, char const *argv[])
{
    Demo Obj1;
    Obj1.display();
    return 0;
}
