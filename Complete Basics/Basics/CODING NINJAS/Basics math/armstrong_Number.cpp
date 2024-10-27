// https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
//  Check Armstrong
// Problem statement
// You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


#include<cmath>

int countDigits(long long n) {
    if (n == 0) return 1;  // Special case for 0
    return floor(log10(n) + 1);
}

bool checkArmstrong(int n){
	//Write your code here
	int arm = 0;
	int val;
	int temp = n;
	int digits = countDigits(n);
	while(n > 0)
	{
		val = n%10;
		arm = arm + (pow(val , digits));
		n = n/10;
	}

	if(arm == temp)
	{
		return true;
	}
	else{
		return false;
	}
	

}
