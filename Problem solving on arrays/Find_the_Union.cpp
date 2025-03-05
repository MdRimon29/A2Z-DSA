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

vector<int> findUnionOptimal(vector<int>&vec, vector<int>&vec2)
{

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