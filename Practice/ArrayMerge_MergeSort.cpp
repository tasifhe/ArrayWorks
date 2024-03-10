//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to merge two arrays of the same size sorted in descending order.
#include <bits/stdc++.h>
//* Using Merge Sort
void merge(int arr[], int left[], int right[], int leftSize, int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] >= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < leftSize)
        arr[k++] = left[i++];

    while (j < rightSize)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int size) {
    if (size <= 1)
        return;

    int mid = size / 2;
    int left[mid];
    int right[size - mid];

    for (int i = 0; i < mid; i++)
        left[i] = arr[i];

    for (int i = mid; i < size; i++)
        right[i - mid] = arr[i];

    mergeSort(left, mid);
    mergeSort(right, size - mid);

    merge(arr, left, right, mid, size - mid);
}

void mergeArrays(int arr1[], int arr2[], int merged[], int n) {
    for (int i = 0; i < n; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < n; i++)
        merged[i + n] = arr2[i];

    mergeSort(merged, n + n);
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
