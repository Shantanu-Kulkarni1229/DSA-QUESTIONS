https://www.geeksforgeeks.org/problems/count-digits5716/0
Count Digits


Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.



//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int n =N;
        int original_n = N; 
    int count = 0;
    
    while (n > 0) {
        int digit = n % 10;  
        
      
        if (digit != 0 && original_n % digit == 0) {
            count++;
        }
        
        n /= 10;  
    }
    
    return count;
}
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends

