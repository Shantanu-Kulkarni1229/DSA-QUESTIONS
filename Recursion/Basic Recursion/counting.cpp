#include<iostream>
using namespace std;


void print(int n){
    //base case
    if(n==0){
        return;
    }
    cout << n << endl;
    print(n-1);
}   
int main(){

    int n;
    cout << "Enter the value of n "<<endl;
    cin>>n;
    cout << "Counting from n to 1" << endl;
    print(n);
}