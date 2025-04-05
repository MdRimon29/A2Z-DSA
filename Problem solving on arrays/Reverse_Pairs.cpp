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

int main()
{
    vector<int>vec={1,3,2,3,1};

    int result=reversePairs(vec);

    cout<<"Numbers of pairs are: "<<result<<endl;

    return 0;
}