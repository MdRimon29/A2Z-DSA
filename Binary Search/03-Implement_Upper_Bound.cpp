#include<bits/stdc++.h>
using namespace std;

int findUpperBoundBrute(vector<int>&vec,int target)
{
    int ans=vec.size();
    for(int i=0; i<=vec.size(); i++)
    {
        if(vec[i]>target)
        {
            ans=min(ans,i);
        }
    }
    return ans;
}

int findUpperBoundOptimal(vector<int>&vec,int target)
{
    int low=0,high=vec.size()-1,ans=vec.size();
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(vec[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int>vec={3,5,8,9,15,19};
    int x=9;

    int result=findUpperBoundOptimal(vec,x);

    //In coding round
    int res=upper_bound(vec.begin(),vec.end(),x)-vec.begin();

    cout<<"Upper bound is: "<<res<<endl;

    return 0;
}