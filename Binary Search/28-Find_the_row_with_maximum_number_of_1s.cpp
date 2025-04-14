#include<bits/stdc++.h>
using namespace std;

//using lowerbound concept here
int countOnes(vector<int>vec,int n)
{
    int low=0,high=vec.size()-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(vec[mid]>=1)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return n-low; //return how many one's containing that row;
}

int rowWithMaximum1(vector<vector<int>>& nums,int m,int n)
{
    int count=0;
    int index=-1;
    for(int i=0; i<m; i++)
    {
        if(countOnes(nums[i],n)>count)
        {
            count=countOnes(nums[i],n);
            index=i;
        }
    }

    return index;
}

int main()
{
    vector<vector<int>>vec={{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n=3,m=3;

    cout<<rowWithMaximum1(vec,m,n)<<endl;

    return 0;
}