//https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-n-to-1-without-loop

// Print N to 1 without loop
// Difficulty: EasyAccuracy: 77.72%Submissions: 70K+Points: 2
// Print numbers from N to 1 (space separated) without the help of loops.

// Example 1:

// Input:
// N = 10
// Output: 10 9 8 7 6 5 4 3 2 1
// Your Task:
// This is a function problem. You only need to complete the function printNos() that takes N as parameter and prints number from N to 1 recursively. Don't print newline, it will be added by the driver code.


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int count = 1;
    void printNos(int N) {
        // code here
        int i = N;
        if(count > N)
        {
            return;
        }
        cout << i << " ";
        N--;
        printNos(N);
        
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends