#include<bits/stdc++.h>
using namespace std;

int sortedOrNot(vector<int>&vec, int n)
{
    for(int i=1; i<n; i++)
    {
        if(vec[i]<vec[i-1])
        {
            return -1;
        }
    }

    return 0;
}

int main()
{
    vector<int>vec={1,2,3,4,4,5,7,9};
    int n=vec.size();

    int result=sortedOrNot(vec,n);

    if(result==-1)
    {
        cout<<"Array is not sorted."<<endl;
    }
    else
    {
        cout<<"Array is sorted."<<endl;
    }
}