#include<bits/stdc++.h>
using namespace std;

//find the smallest element and swap it 
//time complexity for all best worst and avg is O(n^2)

void selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int mini=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    selection_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}