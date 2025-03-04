#include<bits/stdc++.h>
using namespace std;

void moveZeroEndBrute(int n,vector<int> &vec)
{
    vector<int>temp;

    for(int i=0; i<n; i++)
    {
        if(vec[i] != 0)
        {
            temp.push_back(vec[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i<temp.size())
        {
            vec[i]=temp[i];
        }
        else{
            vec[i]=0;
        }
    }
}

void moveZeroEndOptimal(int n,vector<int> &vec)
{
    int j=-1;
    for(int i=0; i<n; i++)
    {
        if(vec[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j!=-1) 
    {
        for(int i=j+1; i<n; i++)
        {
            if(vec[i]!=0)
            {
                swap(vec[i],vec[j]);
                j++;
            }
        }
    }
}

int main()
{
    vector<int>vec={1,0,2,3,2,0,0,4,5,1};
    int n=vec.size();

    moveZeroEndOptimal(n,vec);

    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
}