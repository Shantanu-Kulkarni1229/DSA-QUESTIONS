https://leetcode.com/problems/find-the-middle-index-in-array/description/
1991. Find the Middle Index in Array
Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).

A middleIndex is an index where nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1].

If middleIndex == 0, the left side sum is considered to be 0. Similarly, if middleIndex == nums.length - 1, the right side sum is considered to be 0.

Return the leftmost middleIndex that satisfies the condition, or -1 if there is no such index.

 




class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int  totalSum = 0;
        for(int i =0 ; i < nums.size() ; i++)
        {
            totalSum += nums[i];
        }
        int leftSum = 0;
        for ( int i =0 ; i <nums.size() ; i ++)
        {
            int rightSum = totalSum - leftSum - nums[i];
            if(leftSum == rightSum)
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};