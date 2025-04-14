//https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1
// Find all factorial numbers less than or equal to n
// Difficulty: EasyAccuracy: 48.96%Submissions: 84K+Points: 2
// A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.


// Recurssive Approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void factorialRecursion(long long n, long long fact, int i, vector<long long>& result) {
        // Base case: if factorial exceeds n, stop recursion
        if (fact > n) return;
        
        // Store the current factorial in result
        result.push_back(fact);
        
        // Calculate next factorial recursively
        factorialRecursion(n, fact * (i + 1), i + 1, result);
    }

    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        factorialRecursion(n, 1, 1, result); // Start recursion with fact = 1 and i = 1
        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}





// Brute Force APProach
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
vector<long long> result;
        long long fact = 1; // Start with 1!
        int i = 1;
        
        while (fact <= n) {
            result.push_back(fact);
            i++; // Move to the next number for factorial
            fact *= i; // Calculate the next factorial
        }
        
        return result;
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
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends