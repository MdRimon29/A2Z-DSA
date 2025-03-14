#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>&vec)
{
    int index=-1;
    int n=vec.size();

    for(int i=n-2; i>=0; i--)
    {
        if(vec[i]<vec[i+1])
        {
            index=i;
            break;
        }
    }

    if(index==-1)
    {
        reverse(vec.begin(),vec.end());
        return vec;
    }

    for(int i=n-1; i>index; i--)
    {
        if(vec[i]>vec[index])
        {
            swap(vec[i],vec[index]);
            break;
        }
    }

    reverse(vec.begin()+index+1,vec.end());

    return vec;
}

int main()
{
    vector<int>vec={2,1,5,4,3,0,0};

    vector<int>result=nextPermutation(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }

    return 0;
}