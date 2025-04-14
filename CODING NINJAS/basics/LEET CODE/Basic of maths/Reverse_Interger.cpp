https://leetcode.com/problems/reverse-integer/
7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).



class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int val = x % 10;  // Get the last digit
            
            // Check for overflow before multiplying by 10
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && val > 7)) {
                return 0;  // Overflow for positive numbers
            }
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && val < -8)) {
                return 0;  // Overflow for negative numbers
            }
            
            rev = rev * 10 + val;  // Reverse the digit
            x /= 10;  // Remove the last digit from x
        }
        
        return rev;
    }
};


// Overflow Condition 1:
// cpp
// Copy code
// if (rev > INT_MAX / 10)
// Why is this check needed?
// Before multiplying rev by 10, you need to check if rev is already too large. If rev is greater than INT_MAX / 10 (which is 214748364 / 10 = 214748364), then multiplying it by 10 will definitely make it exceed INT_MAX (2147483647), causing an overflow.

// Example:
// If rev is 214748365, multiplying it by 10 will give 2147483650, which is greater than the maximum allowed value 2147483647. So, we should return 0 to avoid overflow.

// Overflow Condition 2:
// cpp
// Copy code
// if (rev == INT_MAX / 10 && val > 7)
// Why is this check needed?
// This check is needed when rev is exactly INT_MAX / 10 (214748364). At this point, multiplying by 10 alone would give 2147483640, which is still within bounds. However, adding the next digit (val) could push it over the limit.

// Example:

// If rev is 214748364 and the next val is 8, adding this would make 2147483640 + 8 = 2147483648, which is greater than INT_MAX (2147483647), so it would overflow.
// Only val values of 0 to 7 are safe because the maximum value ends in 7 (2147483647). Therefore, if val > 7, it will cause overflow.
// Summary:
// First condition (rev > INT_MAX / 10) checks if multiplying rev by 10 would definitely cause an overflow.
// Second condition (rev == INT_MAX / 10 && val > 7) checks if multiplying rev by 10 is still safe but adding the next digit (val) would cause an overflow.
// These checks ensure that reversing the integer won't exceed the 32-bit integer limits.