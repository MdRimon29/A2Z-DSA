#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int>&vec,int mid,int k)
{
    int cntCows=1,last=vec[0];
    for(int i=1; i<vec.size(); i++)
    {
        if(vec[i]-last>=mid)
        {
            cntCows +=1;
            last=vec[i];
        }
        if(cntCows>=k) return true;
    }

    return false;
}

int aggresiveCows(vector<int>&nums,int k)
{
    sort(nums.begin(),nums.end());

    int n=nums.size();
    int low=1,high=nums[n-1]-nums[0];

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(canWePlace(nums,mid,k))  //if the returned function is true
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return high;
}

int main()
{
    vector<int>vec={0,3,4,7,9,10};
    int k=4; //number of cows

    int result=aggresiveCows(vec,k);

    cout<<result<<endl;

    return 0;
}