#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&vec, int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high)
    {
        if(vec[left]<=vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.push_back(vec[left]);
        left++;
    }

    while(right<=high)
    {
        temp.push_back(vec[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
    {
        vec[i]=temp[i - low];
    }
}

void mergeSort(vector<int>&vec,int low,int high)
{
    if(low==high) return;
    int mid=(low+high)/2;
    mergeSort(vec,low,mid);
    mergeSort(vec,mid+1,high);
    merge(vec,low,mid,high);
}

void MS(vector<int>&vec,int n)
{
    mergeSort(vec,0,n-1);
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

    MS(arr,n);
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}