// Write  a  program in  C++  program  for  unary  increment  (++)  and  decrement  (--)  operator overloading. 
// Declare function getNum(), dispNum(), void operator ++ (void)and void operator --(void)as public in a class NUM. 
// Data memberis int n declare as by default access specifier. 
// Create oneobject as NUM num and values of data member num is passed by a function getnum(15) in main().
// Call  the  operator  overloading  using that  value and increment  and  decrement those numin operator overloading function. 
// Display after increment and after decrement value of the num variable.
// Create additional member functions if needed.
#include <iostream>
using namespace std;
class NUM
{
    int n;
public:
    void getNum(int x) {
        n = x;
    }
    void operator ++(void) {
        ++n;
    }
    void operator --(void) {
        --n;
    }
    void dispNum() {
        cout << " Number is:" << n;
        cout << "\n After Increment: " << ++n;
        cout << "\n After Decrement: " << --n;
    }
};

int main()
{
    NUM num;
    num.getNum(15);
    ++num;
    --num;
    num.dispNum();
    return 0;
}