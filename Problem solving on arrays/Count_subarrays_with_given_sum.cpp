#include<bits/stdc++.h>
using namespace std;

// tc--> O(n^3)
int subarraySumBrute(vector<int>&vec,int k)
{
    int count=0;
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=i; j<vec.size(); j++)
        {
            int sum=0;
            for(int z=i; z<=j; z++)
            {
                sum=sum+vec[z];
            }
            if(sum==k)
            {
                count++;
            }
        }
    }

    return count;
}

// tc --> O(n^2)
int subarraySumBetter(vector<int>&vec,int k)
{
    int count=0;
    for(int i=0; i<vec.size(); i++)
    {
        int sum=0;
        for(int j=i; j<vec.size(); j++)
        {
            
            sum=sum+vec[j];
            if(sum==k)
            {
                count++;
            }
        }
    }

    return count;
}

int subarraySumOptimal(vector<int>&vec,int k)
{
    unordered_map<int,int>mpp;
    mpp[0]=1;

    int preSum=0,count=0;

    for(int i=0; i<vec.size(); i++)
    {
        preSum += vec[i];
        int sub=preSum-k;
        count += mpp[sub];
        mpp[preSum]+=1;
    }

    return count;
}

int main()
{
    vector<int>vec={1,2,3};
    int k=3;

    int result=subarraySumOptimal(vec,k);

    cout<<"Result is : "<<result<<endl;

    return 0;
}