//Solved by Tasif Hossain Emon
//Student of SMUCT //BATCH 29th //ID:221071042
//*Write a program in C to merge two arrays of the same size sorted in descending order.
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int ar1[],int ar2[], int merged[], int n)
{
    for(int i=0;i<n;i++)
        merged[i]=ar1[i];   //copying elements of ar1 to merged

    for(int i=0;i<n;i++)
        merged[i+n]=ar2[i]; //copying elements of ar2 to merged

    //* Bubble sort in decending order
    for(int i=0;i<n+n-i;i++)
    {
        for(int j=0;j<n+n-i-1;j++)
        {
            //*Swapping Elements
            if(merged[j]<merged[j+1])
            {
                int temp=merged[j];
                merged[j]=merged[j+1];
                merged[j+1]=temp;
            }
        }
    }   
}

void printArray(int ar1[], int n)
{
    for(int i=0;i<n;i++)
        cout<<ar1[i]<<" ";
}

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    for(int i=0;i<n;i++) cin>>n;
    int ar1[n];
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n;i++) cin>>ar1[i];
    int ar2[n];
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n;i++) cin>>ar2[i];

    int mergeArray[n+n];
    mergeArrays(ar1,ar2,mergeArray,n);

    cout<<"The merged array in descending order: ";
    printArray(mergeArray,n+n);

    return 0;
}