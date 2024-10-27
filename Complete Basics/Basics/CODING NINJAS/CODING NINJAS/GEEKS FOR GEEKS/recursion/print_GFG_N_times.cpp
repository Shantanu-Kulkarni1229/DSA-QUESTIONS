//https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times

// Print GFG n times
// Difficulty: EasyAccuracy: 75.76%Submissions: 72K+Points: 2
// Print GFG n times without the loop.



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int count = 1;
    void printGfg(int N) {
        // Code here
        if(count > N)
        {
            return;
        }
        cout<<"GFG" <<" ";
        count++;
        printGfg(N);
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
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends