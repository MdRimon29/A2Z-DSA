#include<bits/stdc++.h>
using namespace std;

// tc=O(n^2)
string twoSumBrute(vector<int>&vec, int target)
{
    for(int i=0; i<vec.size(); i++)
    {
        int sum=0;
        for(int j=i+1; j<vec.size(); j++)
        {
            sum=vec[i]+vec[j];
            if(sum==target)
            {
                return "YES"; // --> if they ask about position simply return i,j;
            }
        }
    }
    return "NO";
}

// tc(for unorder map)=O(n)
// tc(for order map)=O(nlog(n))
vector<int> twoSumBetter(vector<int>&vec, int target)
{
    unordered_map<int,int >mpp;

    for(int i=0; i<vec.size(); i++)
    {
        int a=vec[i];
        int rem=target-a;
        if(mpp.find(rem) != mpp.end())
        {
            return {mpp[rem],i};    //for return yes or no just write --> result "YES"
        }
        mpp[vec[i]]=i;
    }
    return {-1,-1};
}

string twoSumOptimal(vector<int>&vec, int target)
{
    int left=0,right=vec.size()-1;

    while(left<right)
    {
        int sum=vec[left]+vec[right];
        if(sum==target)
        {
            return "Yes";
        }
        else if(sum>target)
        {
            right--;
        }
        else{
            left++;
        }
    }
    return "NO";

}

int main()
{
    vector<int>vec={2,6,5,8,11};
    int target=14;

    // for return index
    // vector<int>result=twoSumBetter(vec,target);

    // for(auto it:result){
    //     cout<<it<<" ";  //for printing position
    // }

    string result=twoSumOptimal(vec,target);
    cout<<result<<endl;
}