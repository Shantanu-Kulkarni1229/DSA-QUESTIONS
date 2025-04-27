#include<iostream>

using namespace std;


int sumOfArray(int arr[] , int size){

    // base case
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return arr[0];
    }

    // processing
     
    return arr[0] + sumOfArray(arr + 1, size - 1);
    // return arr[size - 1] + sumOfArray(arr, size - 1);

}


int main () {
   int arr[5] = {3,2,5,1,6};
    int size = 5;

    int sum = sumOfArray(arr, size);
    cout << "The sum of the array is: " << sum << endl;

    return 0;
}