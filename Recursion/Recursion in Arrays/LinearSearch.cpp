#include<iostream>
using namespace std;

void print(int arr[] , int size){
    cout << "the size of the array is: " << size << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
   cout << endl;
    
}

bool linearSearch(int arr[], int size, int key) {
print(arr, size);

    //base case
    if (size == 0) {
        return false;
    }

    //processing
    if (arr[0] == key) {
        return true;
    } else {
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{

    int arr[5] = {2,5,7,43,7};
    int size = 5;

    int key = 7;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }


    return 0;
}