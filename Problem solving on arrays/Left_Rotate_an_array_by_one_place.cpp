#include<bits/stdc++.h>
using namespace std;

void rotateArray(int n,vector<int>&vec)
{
    int temp=vec[0];

    for(int i=1; i<n; i++)
    {
        vec[i-1]=vec[i];
    }
    vec[n-1]=temp;
}

int main()
{
    vector<int>vec={1,2,3,4,5};
    int n=vec.size();

    rotateArray(n,vec);

    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}