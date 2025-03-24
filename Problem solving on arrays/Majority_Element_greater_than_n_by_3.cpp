#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElementsBetter(vector<int>&vec)
{
    int n=vec.size();
    int m=n/3 + 1;
    unordered_map<int,int>mpp;
    vector<int>res;

    for(int i=0; i<vec.size(); i++)
    {
        mpp[vec[i]]++;
        if(mpp[vec[i]]==m)
        {
            res.push_back(vec[i]);
        }
    }

    sort(res.begin(),res.end());

    return res;
}

vector<int> majorityElementsOptimal(vector<int>&vec)
{
    int count1=0,count2=0,el1=0,el2=0;
    int n=vec.size();
    vector<int>res;

    for(int i=0; i<vec.size(); i++)
    {
        if(count1==0 && el2!=vec[i])
        {
            count1++;
            el1=vec[i];
        }
        else if(count2==0 && el1!=vec[i])
        {
            count2++;
            el2=vec[i];
        }
        else if(el1==vec[i])
        {
            count1++;
        }
        else if(el2==vec[i])
        {
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0,count2=0;
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]==el1) count1++;
        if(vec[i]==el2) count2++;
    }

    if(count1>n/3) res.push_back(el1);
    if(count2>n/3) res.push_back(el2);

    sort(res.begin(),res.end());

    return res;
}

int main()
{
    vector<int>vec={1,1,1,1,3,2,2,2};

    vector<int> result=majorityElementsOptimal(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }

    return 0;
}