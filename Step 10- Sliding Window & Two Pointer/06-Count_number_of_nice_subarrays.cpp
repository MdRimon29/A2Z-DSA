#include<bits/stdc++.h>
using namespace std;

int numSubarraysWithSumGoal(vector<int>& nums, int goal){
    if(goal<0) return 0;

    int l=0,r=0;
    int sum=0,count=0;

    while(r<nums.size())
    {
        sum += nums[r]%2;

        while(sum>goal)
        {
            sum -= nums[l]%2;
            l++;
        }

        count += (r-l+1);

        r++;
    }

    return count;
}

//  tc=O(2*2n)
//  sc=O(1)
int numSubarraysWithSum(vector<int>& nums, int goal) {
    int res1=numSubarraysWithSumGoal(nums,goal);
    int res2=numSubarraysWithSumGoal(nums,goal-1);

    return res1-res2;
}

int main()
{
    vector<int>vec={2,2,2,1,2,2,1,2,2,2};
    int k=2;

    int result=numSubarraysWithSum(vec,k);

    cout<<result<<endl;
}