#include<bits/stdc++.h>
using namespace std;

//Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].

int reversePairs(vector<int>&nums)
{
    int count=0;

    for(int i=0; i<nums.size()-1; i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]>2*nums[j])
            {
                count+=1;
            }
        }
    }

    return count;
}

void marge(vector<int>&nums,int low,int mid,int high)
{
    vector<int>vec;
    int n=nums.size();
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high)
    {
        if(nums[left]<=nums[right])
        {
            vec.push_back(nums[left]);
            left++;
        }
        else{
            vec.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        vec.push_back(nums[left]);
        left++;
    }

    while(right<=high)
    {
        vec.push_back(nums[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
    {
        nums[i]=vec[i-low];
    }
}

int countPair(vector<int>&nums,int low,int mid,int high)
{
    int right=mid+1;
    int count=0;
    for(int i=low; i<=mid; i++)
    {
        while(right<=high && nums[i]>2LL *nums[right])
        {
            right++;
        }
        count +=(right-(mid+1));
    }

    return count;
}

int margeSort(vector<int>&nums,int low,int high)
{
    int count=0;
    if(low==high) return count;
    int mid=(low+high)/2;
    count+=margeSort(nums,low,mid);
    count+=margeSort(nums,mid+1,high);
    count+=countPair(nums,low,mid,high);
    marge(nums,low,mid,high);

    return count;
}

int reversePairsOptimal(vector<int>&nums,int n)
{
    return margeSort(nums,0,n-1);
}

int main()
{
    vector<int>vec={4, 1, 2, 3, 1};

    int result=reversePairsOptimal(vec,vec.size());

    cout<<"Numbers of pairs are: "<<result<<endl;

    return 0;
}