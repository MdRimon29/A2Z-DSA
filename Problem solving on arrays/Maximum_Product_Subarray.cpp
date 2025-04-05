#include<bits/stdc++.h>
using namespace std;

int maximumProductBrute(vector<int>&vec)
{
    int maxi=INT_MIN;
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=i; j<vec.size(); j++)
        {
            int ans=1;
            for(int k=i; k<=j; k++)
            {
                ans=ans * vec[k];
            }
            maxi=max(maxi,ans);
        }
    }

    return maxi;
}

int maximumProductBetter(vector<int>&vec)
{
    int maxi=INT_MIN;
    for(int i=0; i<vec.size(); i++)
    {
        int ans=1;
        for(int j=i; j<vec.size(); j++)
        {
            ans=ans * vec[j];
            maxi=max(maxi,ans);
        }
    }

    return maxi;
}

int main()
{
    vector<int>vec={1,2,3,4,5,0};

    int result=maximumProductBetter(vec);

    cout<<"The result is: "<<result<<endl;
}