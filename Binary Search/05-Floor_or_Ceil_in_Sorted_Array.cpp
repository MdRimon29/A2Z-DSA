#include<bits/stdc++.h>
using namespace std;

int floorNumber(vector<int>&vec,int target)
{
    int low=0,high=vec.size()-1,floor=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(vec[mid]<=target)
        {
            floor=vec[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return floor;
}

int ceilNumber(vector<int>&vec,int target)
{
    int low=0,high=vec.size()-1,ceil=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(vec[mid]>=target)
        {
            ceil=vec[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ceil;
}

int main()
{
    vector<int>vec={3,5,8,15,19};
    int x=9;

    int result=floorNumber(vec,x);
    int result2=ceilNumber(vec,x);

    cout<<"Floor number is: "<<result<<endl;
    cout<<"Ceil number is: "<<result2<<endl;

    return 0;
}