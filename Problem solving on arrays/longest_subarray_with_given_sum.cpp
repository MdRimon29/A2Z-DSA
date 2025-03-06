#include<bits/stdc++.h>
using namespace std;

// tc= O(n^3)
// sc= O(1)
int longestSubarrayBrute_1(vector<int>&vec,int num)
{
    int len=0;
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=i; j<vec.size(); j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)
            {
                sum += vec[k];
            }
            if(sum==num) 
            {
                len =max(len,sum);
            }
        }
    }

    return len;
}

// tc=O(n^2)
// sc=O(1)
int longestSubarrayBrute_2(vector<int>&vec,int num)
{
    int len=0;
    for(int i=0; i<vec.size(); i++)
    {
        int sum=0;

        for(int j=i; j<vec.size(); j++)
        {
            sum += vec[j];
            if(sum==num) 
            {
                len =max(len,sum);
            }
        }
    }

    return len;
}

int longestSubarrayBetter(vector<int>&vec,long long num)
{
    map<long long,int>PreSumMap;
    long long sum=0;
    int maxLen=0;

    for(int i=0; i<vec.size(); i++)
    {
        sum +=vec[i];
        if(sum==num)
        {
            maxLen= max(maxLen,i+1);
        }
        long long rem=sum-num;
        if(PreSumMap.find(rem) != PreSumMap.end())
        {
            int len=i-PreSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(PreSumMap.find(sum) == PreSumMap.end())
        {
            PreSumMap[sum]=i;
        }
    }
    return maxLen;
}

int longestSubarrayOptimal(vector<int>&vec,long long num)
{
    int left=0,right=0;
    long long sum=vec[0];
    int maxLen=0;
    int n=vec.size();

    while(right<n)
    {
        while(left<=right && sum>num)
        {
            sum -= vec[left];
            left++;
        }
        if(sum==num)
        {
            maxLen=max(maxLen,(right-left+1));
        }
        right++;
        if(right<n) sum+=vec[right];
    }

    
    return maxLen;
}

int main()
{
    vector<int>vec={1,2,3,1,1,1,1,4,2,3};
    long long num=6;

    int result=longestSubarrayOptimal(vec,num);

    cout<<"Result is: "<<result;
}