#include<iostream>
using namespace std;


bool isSorted(int arr[], int size) {
    //base case
    if (size == 0 || size == 1) {
        return true;
    }

    //processing
    //if first element is greater than second element, return false

    if (arr[0] > arr[1]) {
        return false;
    } 
    // if first element is less than second element, check for the rest of the array
    // by calling the function recursively
    else {
        return isSorted(arr + 1, size - 1);
    }


}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }


    return 0;
}