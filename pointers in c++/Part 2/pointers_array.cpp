#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10} ;
    // int *p = arr ;
    // for (int i = 0; i <  10; i++) 
    // {
    //     p = &arr[i] ;
    //     cout << "Value of : " << arr[i] << " has address : " << p <<endl ;
    // }
    // int i = 3;
    // cout << i[arr] << endl ;
    
    // int temp[10];

    // cout << sizeof(temp) << endl ; 
    // cout << sizeof(*temp) << endl ; 
    // int *ptr = &temp[0] ;
    // cout << sizeof(ptr) << endl ;
    // cout << sizeof(*ptr) << endl ;
    // cout << sizeof(&ptr) << endl ;


    // int a[20] = {1,2,3,4};
    // cout << &a[0] << endl ;
    // cout << &a << endl ;
    // cout << a << endl ;


    // int *p = &a[0] ;

    // cout << *p << endl ;
    // cout << p << endl ;
    // cout << &p << endl ;
   


    int arr[10];
    int *ptr = &arr[0] ;
    cout << ptr << endl ;
    ptr = ptr + 1 ;
    cout << ptr << endl ;
 
return 0 ;
}