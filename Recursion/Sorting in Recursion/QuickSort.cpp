#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;

    for (int i = 0; i = s +1; i++)
    {
        if (arr[i] <= pivot){
            count++;
        }
    }
    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right part
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex){
        while (arr[i] < pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
    

}

void quickSort(int arr[], int s, int e){

    if (s >= e){
        return;
    }

    // partitioning
    int p = partition(arr, s, e);

    //left part
    quickSort(arr, s, p-1);

    //right part
    quickSort(arr, p+1, e);
    
}

int main (){
    int arr[10] = {65 , 32, 77 , 68 , 98 , 45 , 35, 66, 88 ,100};
    int n = 10;

    quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}