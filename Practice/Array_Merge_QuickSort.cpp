//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to merge two arrays of the same size sorted in descending order.
#include <bits/stdc++.h>
//*Using Quick Sort
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void mergeArrays(int arr1[], int arr2[], int merged[], int n) {
    for (int i = 0; i < n; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < n; i++)
        merged[i + n] = arr2[i];

    quickSort(merged, 0, n + n - 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter size of the array: ";
    std::cin >> n;

    int arr1[n];
    std::cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr1[i];

    int arr2[n];
    std::cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr2[i];

    int mergedArray[n + n];
    mergeArrays(arr1, arr2, mergedArray, n);

    std::cout << "The merged array in descending order: ";
    printArray(mergedArray, n + n);

    return 0;
}
