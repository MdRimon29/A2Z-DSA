#include<bits/stdc++.h>
using namespace std;

int longestOnesBrute(vector<int>& nums, int k){
    int maxlen=0;
    for(int i=0; i<nums.size(); i++)
    {
        int sumZeros=0;
        for(int j=i; j<nums.size(); j++)
        {
            if(nums[j]==0) sumZeros++;

            if(sumZeros<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                break;
            }
        }
    }

    return maxlen;
}

// worst tc->O(n+n)
// sc->O(1)
int longestOnes(vector<int>& nums, int k) {
    int left=0,right=0;
    int n=nums.size();
    int sumZero=0,maxLen=0;
    
    while(right<n)
    {
        if(nums[right]==0) sumZero +=1;

        if(sumZero>k){
            if(nums[left]==0){
                sumZero -=1;
            }
            left ++;
        }

        if(sumZero<=k)
        {
            maxLen=max(maxLen,right-left+1);
        }

        right++;
    }

    return maxLen;
}

int main()
{
    vector<int>vec={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;

    int result=longestOnes(vec,k);

    cout<<result<<endl;

    return 0;
}