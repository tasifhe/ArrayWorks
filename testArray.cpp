#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B[5]={1,2,3,4,5};

    int len = sizeof(B)/sizeof(B[0]);

    for(int i=0;i<len;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
    for(int i=len-1;i>=0;i--)
    {
        cout<<B[i]<<" ";
    }
    return 0;
}