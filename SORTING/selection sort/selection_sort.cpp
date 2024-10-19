#include <iostream>
using namespace std;

void selection_sort(int arr[], int size) {
    int min_ind;
    for (int i = 0; i < size - 1; i++) {
        min_ind = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {  // Changed to 'i < size' to include all elements
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {2, 56, 38, 90, 45, 1};
    cout << "Original Array is: ";
    printArray(arr, 6);  // Corrected array and size passing

    selection_sort(arr, 6);  // Corrected function call

    cout << "Sorted Array is: ";
    printArray(arr, 6);  // Corrected array and size passing

    return 0;
}
