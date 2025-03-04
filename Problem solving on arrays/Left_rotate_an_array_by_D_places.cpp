#include<bits/stdc++.h>
using namespace std;

//brute force
void rotateArrayBruteForce(int n,vector<int>&vec,int d)
{
    vector<int>temp;
    d=d%n;

    for(int i=0; i<d; i++)
    {
        temp.emplace_back(vec[i]);
    }

    for(int i=d; i<n; i++)
    {
        vec[i-d]=vec[i];
    }

    for(int i=0; i<d; i++)
    {
        vec[n-d+i]=temp[i];
    }
}

void rotateArray(int n, vector<int>&vec,int d)
{
    reverse(vec.begin(), vec.begin()+d);
    reverse(vec.begin()+d,vec.end());
    reverse(vec.begin(),vec.end());
}

int main()
{
    vector<int>vec={1,2,3,4,5,6,7};
    int d=3;
    int n=vec.size();

    rotateArray(n,vec,d);

    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}