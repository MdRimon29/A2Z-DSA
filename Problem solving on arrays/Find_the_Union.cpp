#include<bits/stdc++.h>
using namespace std;

// tc= O(n1*log(n)+n2*log(n))+O(n1+n2)   worst case
// sc= O(n1+n2)
vector<int> findUnionBrute(vector<int>&vec, vector<int>&vec2)
{
    set<int>st;
    for(int i=0; i<vec.size(); i++)
    {
        st.insert(vec[i]);
    }
    for(int i=0; i<vec2.size(); i++)
    {
        st.insert(vec2[i]);
    }

    vector<int>f_union;
    for(auto it:st)
    {
        f_union.emplace_back(it);
    }

    return f_union;
}

// tc=O(n1+n2)
// sc= O(n1+n2) -->for returning the answer
vector<int> findUnionOptimal(vector<int>&vec, vector<int>&vec2)
{
    int i=0; 
    int j=0;
    vector<int>unionArr;
    while(i<vec.size() && j<vec2.size())
    {
        if(vec[i] <= vec2[j])
        {
            if(unionArr.size()==0 ||  unionArr.back() != vec[i])
            {
                unionArr.push_back(vec[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 ||  unionArr.back() != vec2[j])
            {
                unionArr.push_back(vec2[j]);
            }
            j++;
        }
    }

    while(j<vec2.size())
    {
        if(unionArr.size()==0 ||  unionArr.back() != vec2[j])
        {
            unionArr.push_back(vec2[j]);
        }
        j++;
    }

    while(i<vec.size())
    {
        if(unionArr.size()==0 ||  unionArr.back() != vec[i])
        {
            unionArr.push_back(vec[i]);
        }
        i++;
    }

    return unionArr;
}

int main()
{
    vector<int>vec={1,1,2,3,4,5};
    vector<int>vec2={2,3,4,5,6};

    vector<int >result=findUnionOptimal(vec,vec2);

    for(auto it:result)
    {
        cout<<it<<" ";
    }
}