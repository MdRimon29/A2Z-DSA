#include<bits/stdc++.h>
using namespace std;
// tc=O(n**2)
// sc=O(n)
int countSubarray(vector<int>&vec,int k)
{
    unordered_map<int,int>mpp;
    int count=0;

    for(int i=0; i<vec.size(); i++)
    {
        mpp.clear();
        for(int j=i; j<vec.size(); j++)
        {
            mpp[vec[j]]++;

            if(mpp.size()==k){
                count ++ ;
            }
            else if(mpp.size()>k){
                break;
            }
        }
    }

    return count;
}

// tc=O(2*n)
// sc=O(n)
int subarrays(vector<int>& nums, int k) {
    int l=0,r=0;
    unordered_map<int,int>mpp;
    int count=0;

    while(r<nums.size())
    {
        mpp[nums[r]]++;

        while(mpp.size()>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0) mpp.erase(nums[l]);
            l++;
        }

        count+=(r-l+1);

        r++;
    }

    return count;
}

int subarraysWithKDistinct(vector<int>& nums, int k) {
    int num1=subarrays(nums,k);
    int num2=subarrays(nums,k-1);

    return num1-num2;
}

int main()
{
    vector<int>vec={1,2,1,2,3};
    int k=2;

    int result=subarraysWithKDistinct(vec,k);

    cout<<result<<endl;
}