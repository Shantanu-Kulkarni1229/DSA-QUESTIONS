// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
// MINIMUM JUMPS
// Given an array arr[] of non-negative integers. Each array element represents the maximum length of the jumps that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
// Find the minimum number of jumps to reach the end of the array starting from the first element. If an element is 0, then you cannot move through that element.
// Note:  Return -1 if you can't reach the end of the array.

// Examples : 

// Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
// Output: 3 
// Explanation:First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last. 



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) { int n = arr.size();
        
        // If the array has only one element, no jumps are needed
        if (n == 1) return 0;

        // If the first element is 0, it's impossible to move forward
        if (arr[0] == 0) return -1;

        // Initialize variables
        int maxReach = arr[0];  // Maximum index that can be reached
        int steps = arr[0];     // Steps we can still take with the current jump
        int jumps = 1;          // At least one jump is needed initially

        // Traverse the array starting from the second element
        for (int i = 1; i < n; i++) {
            // If we've reached the last element, return the jump count
            if (i == n - 1) return jumps;

            // Update maxReach with the farthest we can go from index i
            maxReach = max(maxReach, i + arr[i]);

            // Use one step to move to the current index
            steps--;

            // If no more steps remain
            if (steps == 0) {
                jumps++;  // We need another jump

                // If the current index is beyond maxReach, we cannot proceed
                if (i >= maxReach) return -1;

                // Reset steps to the number of steps from i to maxReach
                steps = maxReach - i;
            }
        }

        // If we cannot reach the end, return -1
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends