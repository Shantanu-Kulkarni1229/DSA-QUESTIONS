#include<iostream>
using namespace std;

int& funcc (int a){

    int num = a;
    int & ans = num;
    return ans;
}

void update1(int n ){
    n++;
}
void update(int &n ){
    n++;
}
int main(){
    /* int i = 5;

    // create a reference variable
    int &j = i;
    cout<< i <<  " " << j << endl;
    i++;
    cout<<i<< " " << j <<  endl;
    j++;
    cout<< i <<  " " << j << endl;
    */


    int n = 5;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;

    funcc(n);
    cout << "After " << n << endl;
    return 0;
}