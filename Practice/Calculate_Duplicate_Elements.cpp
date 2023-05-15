//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to count the total number of duplicate elements in an array

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
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]) count++;
        }
    }
    cout<<"Total number of duplicate elements is: "<<count<<endl;
    return 0;
}