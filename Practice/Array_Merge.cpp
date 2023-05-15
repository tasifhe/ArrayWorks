//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to merge two arrays of the same size sorted in descending order.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int arr2[n];
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n;i++) cin>>arr2[i];
    int arr3[n+n];
    for(int i=0;i<n;i++) arr3[i]=arr[i];
    for(int i=n;i<n+n;i++) arr3[i]=arr2[i-n];
    sort(arr3,arr3+n+n,greater<int>());
    cout<<"The merged array in descending order: ";
    for(int i=0;i<n+n;i++) cout<<arr3[i]<<" ";
    return 0;
}