https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
852. Peak Index in a Mountain Array
ou are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.



class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while ( s < e)
        {
        int mid = s+(e-s)/2;

            if(arr[mid] < arr[mid+1])
            {
                s = mid + 1;
            }
            else 
            {
                e = mid;
            }
        }



    return s;
    }
};