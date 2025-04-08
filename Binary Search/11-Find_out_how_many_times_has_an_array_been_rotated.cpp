#include<bits/stdc++.h>
using namespace std;

// just using index concept for find how many times its rotated
int findMinimum(vector<int>&nums)
{
    int low=0,high=nums.size()-1,mini=INT_MAX;
    int index=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[low]<=nums[high])
        {
            if(nums[low]<mini)
            {
                mini=nums[low];
                index=low;
            }
            break;
        }

        if(nums[low]<=nums[mid])
        {
            if(nums[low]<mini)
            {
                mini=nums[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            if(nums[low]<mini)
            {
                mini=nums[mid];
                index=mid;
            }
            high=mid-1;
        }
    }

    int times=index;

    return times;
}

int main()
{
    vector<int>vec={4,5,6,7,0,1,2};

    int result=findMinimum(vec);

    cout<<result<<endl;
}