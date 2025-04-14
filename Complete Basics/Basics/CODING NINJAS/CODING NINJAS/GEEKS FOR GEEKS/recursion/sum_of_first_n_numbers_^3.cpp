// https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

// Sum of first n terms
// Difficulty: BasicAccuracy: 23.17%Submissions: 136K+Points: 1
// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
#include<cmath>
class Solution {
    int num = 0;
    int sum = 0;
  public:
    long long sumOfSeries(long long n) {
       if(n == 0)
       {
           return 0;
       }
       return( (n*n*n) + sumOfSeries(n-1));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends