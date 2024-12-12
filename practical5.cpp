#include <iostream>
using namespace std;

// Function template for Selection Sort
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the element at index i
        T temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to display the array
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Integer array
    int intArr[] = {64, 25, 12, 22, 11};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original integer array: ";
    displayArray(intArr, intSize);

    // Sort the integer array using selection sort
    selectionSort(intArr, intSize);

    cout << "Sorted integer array: ";
    displayArray(intArr, intSize);

    // Float array
    float floatArr[] = {64.5, 25.3, 12.1, 22.4, 11.6};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    cout << "\nOriginal float array: ";
    displayArray(floatArr, floatSize);

    // Sort the float array using selection sort
    selectionSort(floatArr, floatSize);

    cout << "Sorted float array: ";
    displayArray(floatArr, floatSize);

    return 0;
}
