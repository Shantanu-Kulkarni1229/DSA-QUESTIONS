#include<iostream>
using namespace std;


bool checkPalindrome(string &s, int i, int j){

    cout << "RECURSIVE CALL RECEIEVED FOR " << s << endl;
    if(i>j){
        return true;
    }

    if(s[i] != s[j]){
        return false;
    }
    else{
        return checkPalindrome(s, i+1, j-1);

    }

}

int main(){
    string name = "abbaccccabba";
    cout << endl;

    bool isPalidrome = checkPalindrome(name, 0, name.length()-1);
    if(isPalidrome){
        cout << "String is Palindrome" << endl;
    }else{
        cout << "String is not Palindrome" << endl;
    }


    return 0;
}