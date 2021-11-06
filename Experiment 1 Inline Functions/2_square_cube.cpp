// 2.  Write  a  program  to find  square  and  cube  of  a  given  number.  Square()  and  cube()  are  inline functions.

#include <iostream>
using namespace std;

inline int square(int a) {
    return a*a;
}
inline int cube(int a) {
    return a*a*a;
}
int main() {
    int a;
    cout << "Enter a Number ";
    cin >> a;
    cout << "Its square is " << square(a) << " and Cube is " << cube(a);
}   