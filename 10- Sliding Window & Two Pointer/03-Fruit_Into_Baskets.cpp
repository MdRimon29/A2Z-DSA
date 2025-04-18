#include<bits/stdc++.h>
using namespace std;

// tc=O(n*n)
// sc=O(3)
int FruitsInBasketsBrute(vector<int>& nums, int k){
    int maxlen=0;
    for(int i=0; i<nums.size(); i++)
    {
        set<int>st;
        for(int j=i; j<nums.size(); j++)
        {
            st.insert(nums[j]);
            if(st.size()<=k)
            {
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
int FruitsInBaskets(vector<int>& nums, int k) {
    int left=0,right=0;
    int n=nums.size();
    int sum=0,maxLen=0;
    
    

    return maxLen;
}

int main()
{
    vector<int>vec={3,3,3,1,2,1,1,2,2,3,3};
    int k=2;

    int result=FruitsInBasketsBrute(vec,k);

    cout<<result<<endl;

    return 0;
}