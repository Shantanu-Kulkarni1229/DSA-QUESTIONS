#include<iostream>
using namespace std;

void sortArr(int arr[], int n){

    if(n==0 || n==1){
        return;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArr(arr, n-1);
}

int main(){



int arr[5] = {65,52,66,97,37};

sortArr(arr, 5);

cout << "Sorted array is: " << endl;
for(int i=0; i<5; i++){
    cout << arr[i] << " ";
}


    return 0;
}