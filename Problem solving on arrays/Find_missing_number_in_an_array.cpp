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

// tc=O(n)
// sc=O(1)
int findNumberOptimal1(int n,vector<int>&vec)
{
    int count=0;
    for(auto it:vec)
    {
        count += it;
    }
    
    int sum=(n*(n+1))/2;
    
    return sum-count;
}

// tc=O(n)
// sc=O(1)
int findNumberOptimal2(int n,vector<int>&vec)
{
    int XOR1=0;
    int XOR2=0;

    for(int i=0; i<vec.size(); i++)
    {
        XOR2=XOR2 ^ vec[i];
        XOR1=XOR1 ^ (i+1);
    }
    XOR1 = XOR1 ^ n;

    return XOR2^XOR1;
}

int main()
{
    vector<int>vec={1,2,4,5};
    int n=5;

    int number=findNumberOptimal2(n,vec);

    cout<<"Missing number is: "<<number;
}