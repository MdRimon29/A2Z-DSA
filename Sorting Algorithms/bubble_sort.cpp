#include<bits/stdc++.h>
using namespace std;

//In bubble sort,push the maximum to the last index by the adjacent swaps

void bubble_sort(int arr[], int n)
{
    for(int i=n-1; i>=1; i--)
    {
        int temp=0;
        int count=0;
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

                count++;
            }
        }
        if(count==0)
        {
            break;
        }
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

    bubble_sort(arr,n);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}