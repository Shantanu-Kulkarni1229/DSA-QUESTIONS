// https://leetcode.com/problems/valid-palindrome/description/
// 125. Valid Palindrome
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.


bool valid(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char toLowerCase(char ch)
{
  if((ch >= 'a' && ch <= 'z')||(ch >= '0' && ch <= '9') ) {
    return ch;
  }
  else{
    char temp = ch - 'A' + 'a';
    return temp;
    }
}   
  bool checkaPalindrome(string str){
  int s = 0;
  int e = str.length() -1;
  while(s<=e)
  {
   if(str[s] != str[e])
   {
    return false;
   }
   else{
    s++;
    e--;
   }

  }
  return true;
}

class Solution {
public:
    bool isPalindrome(string s) {
        //Faltu character hatao
        string temp = "";
        for (int i = 0 ; i <= s.length() ; i++)
        {
            if(valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }


        // lower case mai conver kro

            for (int i = 0 ; i <= temp.length() ; i++)
            {
                temp[i] = toLowerCase(temp[i]);
            }



        // check palindrome
        return checkaPalindrome(temp);

    }
};