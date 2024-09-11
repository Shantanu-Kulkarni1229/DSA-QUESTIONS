// https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

//  Sum of all divisors
// Problem statement
// You are given an integer ‘n’.



// Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.



// Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.



// Example:
// Input: ‘n’  = 5

// Output: 21

// Explanation:
// We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
// ‘sumOfDivisors(1)’ = 1
// ‘sumOfDivisors(2)’ = 2 + 1 = 3
// ‘sumOfDivisors(3)’ = 3 + 1 = 4
// ‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
// ‘sumOfDivisors(5)’ = 5 + 1 = 6
// Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

// most optimal solution



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


class Solution
{
public:
    long long sumOfDivisors(int N)
    {
    long long totalSum = 0;
    
    for (int i = 1; i <= N; ++i) {
        totalSum += (N / i) * i;
    }
    
    return totalSum;
}

    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends

// Optimised APPROACH
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        vector<long long> sumDivisors(N + 1, 0);
    
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            sumDivisors[j] += i;
        }
    }
    
    long long totalSum = 0;
    for (int i = 1; i <= N; ++i) {
        totalSum += sumDivisors[i];
    }
    
    return totalSum;
}
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends



// BRUTE FORCE APPROACH
#include <iostream>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int sumOfAllDivisors(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; ++i) {
        totalSum += sumOfDivisors(i); // Add the sum of divisors of i
    }
    return totalSum;
}

