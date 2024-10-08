//https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-1-to-n-without-using-loops

// Print 1 To N Without Loop


// Print 1 To N Without Loop
// Difficulty: BasicAccuracy: 61.33%Submissions: 238K+Points: 1
// Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.

// Don't print newline, it will be added by the driver code.



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    int i = 1;
    void printNos(int N)
    {
        if(i > N) {
            return;
            
        }
        cout<<i << " ";
        i++;
        printNos(N);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends