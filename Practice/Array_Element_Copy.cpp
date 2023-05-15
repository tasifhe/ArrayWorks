//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to copy the elements of one array into another array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int arr2[n];
    for(int i=0;i<n;i++) arr2[i]=arr[i];
    cout<<"The elements of the second array are: ";
    for(int i=0;i<n;i++) cout<<arr2[i]<<" ";
    return 0;
}