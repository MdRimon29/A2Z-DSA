#include<bits/stdc++.h>
using namespace std;

//using binary search
int firstOccurance(vector<int>&nums,int target)
{
    int low=0,high=nums.size()-1,first=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]==target)
        {
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]>target)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return first;
}

int lastOccurance(vector<int>&nums,int target)
{
    int low=0,high=nums.size()-1,last=-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]==target)
        {
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]>target)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return last;
}

//for using lowerbound and upperbound just use {lowerbound,upperbound-1}

vector<int> findOccurane(vector<int>&nums,int target)
{
    int first=firstOccurance(nums,target);
    if(first==-1) return {-1,-1};
    return {first,lastOccurance(nums,target)};
}

int main()
{
    vector<int>vec={5,7,7,8,8,10};
    int target=6;

    vector<int> result=findOccurane(vec,target);

    cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;

    return 0;
}