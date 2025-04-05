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

int main()
{
    vector<int>vec={5,4,3,2,1};

    int result=countInversionBrute(vec);
    cout<<"Number of inversions are: "<<result<<endl;
}