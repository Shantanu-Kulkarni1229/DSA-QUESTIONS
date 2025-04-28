#include<iostream>
using namespace std;

void reverseString(string &s, int i, int j){

    cout << "RECURSIVE CALL RECEIEVED FOR " << s << endl;
    if(i>=j){
        return;
    }

    swap(s[i], s[j]);
    reverseString(s, i+1, j-1);
}

int main(){

    string name = "shantanu";

    reverseString(name, 0, name.length()-1);
    cout<<name<<endl; // Output: unatanhs
    


    return 0;
}