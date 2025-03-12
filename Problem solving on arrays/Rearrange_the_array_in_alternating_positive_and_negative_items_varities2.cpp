#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrayOptimal(vector<int>vec)
{
    vector<int>pos;
    vector<int>neg;

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]>=0)
        {
            pos.emplace_back(vec[i]);
        }
        else{
            neg.emplace_back(vec[i]);
        }
    }

    if(pos.size()>neg.size())
    {
        for(int i=0; i<neg.size(); i++)
        {
            vec[i*2]=pos[i];
            vec[i*2+1]=neg[i];
        }
        for(int i=neg.size(); i<pos.size(); i++)
        {
            vec[neg.size()+i]=pos[i];
        }
    }
    else
    {
        for(int i=0; i<pos.size(); i++)
        {
            vec[i*2]=neg[i];
            vec[i*2+1]=pos[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size(); i<neg.size(); i++)
        {
            vec[index]=neg[i];
            index++;
        }
    }

    return vec;
}

int main()
{
    vector<int>vec={3,1,-2,-5,2,-4,7,8};

    vector<int>result=rearrangeArrayOptimal(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }
}