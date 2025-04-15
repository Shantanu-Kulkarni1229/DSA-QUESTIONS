#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;
    // &operator gives address of variable
    cout <<"address of num is "<< &num << endl;

    // Pointers stores the address of  variables

    int *ptr = &num;

    cout << "value is : " << *ptr << endl;
    cout << "address is : " << ptr << endl;

    double d = 4.3;
    double *p = &d;
    cout << "value is : " << *p << endl;
    cout << "address is : " << p << endl;

    cout << "size of int is : " << sizeof(num) << endl;
    cout << "size of int pointer is : " << sizeof(ptr) << endl;
    cout << "size of double is : " << sizeof(d) << endl;
    cout << "size of double pointer is : " << sizeof(p) << endl;
    
    return 0;
}