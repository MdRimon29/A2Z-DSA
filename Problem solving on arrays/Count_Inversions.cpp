#include<bits/stdc++.h>
using namespace std;

int countInversionBrute(vector<int>&nums)
{
    int count=0;
    int n=nums.size();
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[i]>nums[j])
            {
                count++;
            }
        }
    }

    return count;
}

int merge(vector<int>&vec, int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    int count=0;

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
            count +=(mid-left+1);
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

    return count;
}

int mergeSort(vector<int>&vec,int low,int high)
{
    int count=0;
    if(low==high) return count;
    int mid=(low+high)/2;
    count += mergeSort(vec,low,mid);
    count += mergeSort(vec,mid+1,high);
    count += merge(vec,low,mid,high);

    return count;
}

int countInversionOptimal(vector<int>&vec,int n)
{
    int count=mergeSort(vec,0,n-1);

    return count;
}

int main()
{
    vector<int>vec={5,4,3,2,1};

    int result=countInversionOptimal(vec,5);
    cout<<"Number of inversions are: "<<result<<endl;
}