#include<iostream>
using namespace std ;

int main(){
    // pointer to int is cerated and poiying to some garbage value
 // int *p

 // int *p = 0; segmentation error

//  int i = 5;

//  // int *p = &i;

//  int *p =0;
//  p =  &i;

// cout << "value of i is : " << i << endl;
// cout << "value of p is : " << p << endl;
// cout << "value of *p is : " << *p << endl;

int num = 10;
int a = num;
cout << "value of num before a++ is : " << num << endl;

a++;
cout << "value of num after a++ is : " << num << endl;

int *p = &num;
cout << "value of num before *p++ is : " << num << endl;

(*p)++;
cout << "value of num after *p++ is : " << num << endl;
// copying a pointer

int *q = p;
cout << p << " - " << q << endl;
cout << *p << " - " << *q << endl;

// Important Concepts

int i = 3 ; 
int  *t = &i;

cout << "before *t = *t+1 : " << *t << endl;

*t = *t+1;
cout   << "after *t = *t+1 :  " << *t << endl;
cout <<"Before t " << t << endl;
t = t+1;
cout <<"After t " << t << endl;

    return 0;
}