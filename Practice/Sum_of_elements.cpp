//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to find the sum of all elements of the array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    cout<<"Sum of the elements is: "<<sum<<endl;
    return 0;
}