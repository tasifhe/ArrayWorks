//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to print all unique elements in an array.

#include<iostream>
using namespace std;

int main()
{
    int n, count=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Unique elements are: ";
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j]) count++;
        }
        if(count==1) cout<<arr[i]<<" ";
    }
    return 0;
}