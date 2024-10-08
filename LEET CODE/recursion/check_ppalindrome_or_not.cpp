// https://leetcode.com/problems/valid-palindrome/description/

// 125. Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.


// Recurssive Approach
int i = 0, j = s.length() - 1;

        while (i < j) {
            // Move i to the next alphanumeric character
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            // Move j to the previous alphanumeric character
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // Compare the current characters
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            // Move to the next characters
            i++;
            j--;
        }

        return true;