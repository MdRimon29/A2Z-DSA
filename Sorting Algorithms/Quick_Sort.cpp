#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&vec,int low,int high)
{
    int pivot=vec[high];
    int i=low-1;
    for(int j=low; j<high; j++)
    {
        if(vec[j]<pivot)
        {
            i++;
            int temp=vec[i];
            vec[i]=vec[j];
            vec[j]=temp;
        }
    }
    i++;
    int temp=vec[i];
    vec[i]=vec[high];
    vec[high]=temp;

    return i;
}

void QuickSort(vector<int>&vec,int low,int high)
{
    if(low>=high) return;
    int pivot=partition(vec,low,high);
    QuickSort(vec,low,pivot-1);
    QuickSort(vec,pivot+1,high);
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    QuickSort(arr,0,n-1);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}