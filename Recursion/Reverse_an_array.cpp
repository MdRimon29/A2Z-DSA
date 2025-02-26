#include<bits/stdc++.h>
using namespace std;

void type1(int l,int r, int arr[])
{
    if(l>=r) return;

    swap(arr[l],arr[r]);
    type1(l+1,r-1, arr);
}

void type2(int l,int n,int arr[])
{
    if(l>=n/2) return;

    swap(arr[l], arr[n-l-1]);
    type2(l+1,n,arr);
}

int main()
{
    int arr[5]={2,4,7,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    //type1(0,n-1, arr);

    type2(0,n,arr);

    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}