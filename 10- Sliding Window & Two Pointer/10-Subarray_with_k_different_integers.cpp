#include<bits/stdc++.h>
using namespace std;

int countSubarray(vector<int>&vec,int k)
{
    unordered_map<int,int>mpp;
    int count=0;

    for(int i=0; i<vec.size(); i++)
    {
        mpp.clear();
        for(int j=i; j<vec.size(); j++)
        {
            mpp[vec[j]]++;

            if(mpp.size()==k){
                count ++ ;
            }
            else if(mpp.size()>k){
                break;
            }
        }
    }

    return count;
}

int main()
{
    vector<int>vec={1,2,1,2,3};
    int k=2;

    int result=countSubarray(vec,k);

    cout<<result<<endl;
}