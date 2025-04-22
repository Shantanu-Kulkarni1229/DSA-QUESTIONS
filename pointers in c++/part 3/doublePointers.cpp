#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int ** p2 = &p;
    cout << "The value of i is " << i << endl;
    cout << "The address of p is " << p << endl;
    cout << "The value of *p is " << *p << endl;
    cout << "The address of p2 is " << p2 << endl;
    cout << "The value of **p2 is " << *p2 << endl;
 
     
    return 0;
}