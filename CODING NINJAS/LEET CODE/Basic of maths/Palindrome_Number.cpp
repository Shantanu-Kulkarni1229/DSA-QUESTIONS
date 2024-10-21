https://leetcode.com/problems/palindrome-number/

9. PALINDROME NUMBER

Given an integer x, return true if x is a 
palindrome
and false otherwise.



class Solution {
public:
    bool isPalindrome(int x) {
    
        int rev = 0;
        int org = x;

        while (x > 0) {
            int val = x % 10; 
            
            
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && val > 7)) {
                return 0;  
            }
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && val < -8)) {
                return false;  
            }
            
            rev = rev * 10 + val;  
            x /= 10;  
        }
        if (rev == org){
            return true;
        }
        else{
            return false;
        }
    }
};

