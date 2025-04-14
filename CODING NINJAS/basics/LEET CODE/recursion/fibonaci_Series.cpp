// https://leetcode.com/problems/fibonacci-number/description/
// 509. Fibonacci Number

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

class Solution {
public:
    int fib(int n) {
         if(n <= 1)
   {
       return n;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fib(n-1);
   int slast = fib(n-2);
   
   return last + slast;

}
    
};