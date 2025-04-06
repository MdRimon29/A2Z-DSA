#include<bits/stdc++.h>
using namespace std;

// tc=O(log(n))
int rotatedSorted(vector<int>&nums,int target)
{
    int low=0,high=nums.size()-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(nums[mid]==target)
        {
            return mid;
        }

        //left sorted
        if(nums[low]<=nums[mid])
        {
            if(nums[low]<=target && target<=nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        //right sorted
        else
        {
            if(nums[mid]<=target && target<=nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int>vec={7,8,9,1,2,3,4,5,6};
    int target=1;

    int result=rotatedSorted(vec,target);

    cout<<result<<endl;

    return 0;
}