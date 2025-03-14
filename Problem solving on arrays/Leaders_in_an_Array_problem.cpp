#include<bits/stdc++.h>
using namespace std;

// tc=O(n^2)
// sc=O(n) -->in terms of printing.not finding the answer.and worst case is like  {5,4,3,2,1}
vector<int> findLeaderBrute(vector<int>&vec)
{
    vector<int>res;
    for(int i=0; i<vec.size(); i++)
    {
        bool leader=true;
        for(int j=i+1; j<vec.size(); j++)
        {
            if(vec[i]<vec[j])
            {
                leader=false;
                break;
            }
        }
        if(leader==true)
        {
            res.emplace_back(vec[i]);
        }
    }

    return res;
}

vector<int> findLeaderOptimal(vector<int>&vec)
{
    int max=INT_MIN;
    vector<int>res;

    for(int i=vec.size()-1; i>=0; i--)
    {
        if(vec[i]>=max)
        {
            res.push_back(vec[i]);
            max=vec[i];
        }
    }

    //if they ask for in given format then just reverse the ans
    //if they ask for result in a sorted format then just sort the ans

    return res;
}

int main()
{
    vector<int>vec={10,22,12,3,0,6};

    vector<int> result=findLeaderOptimal(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }
}