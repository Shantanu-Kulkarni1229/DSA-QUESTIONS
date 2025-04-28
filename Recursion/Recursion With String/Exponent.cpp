#include<iostream>
using namespace std;

int power(int a, int b){
    cout << "RECURSIVE CALL RECEIEVED FOR " << a << "^" << b << endl;
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    return a * power(a, b-1);
}

int main(){
    int a,b;
    cout << "Enter the base and exponent: " << endl;
    cin >> a >> b;




    int ans = power(a, b);
    cout << "The power of " << a << " raised to " << b << " is: " << ans << endl;
    return 0;
}