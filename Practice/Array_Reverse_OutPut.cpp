//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to read n number of values in an array and display them in reverse order.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"The elements in reverse order: ";
    //*using reverse function
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    //*using for reverse loop
    // cout<<"The elements in reverse order: ";
    // for (int i = n-1; i >= 0; i--) {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
