#include<bits/stdc++.h>
using namespace std;

// tc=O(n*n)
// sc=O(1)
int findNumberBrute(int n,vector<int>&vec)
{
    for(int i=1; i<=n; i++)
    {
        int flag=0;
        for(int j=0; j<n; j++)
        {
            if(vec[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            return i;
        }
    }
    return -1;
}

// tc=O(n)+O(n)
// sc=O(n)
int findNumberBetter(int n,vector<int>&vec)
{
    int hash[n+1]={0};
    for(int i=0; i<vec.size(); i++)
    {
        hash[vec[i]]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int>vec={1,2,3,4};
    int n=5;

    int number=findNumberBetter(n,vec);

    cout<<"Missing number is: "<<number;
}