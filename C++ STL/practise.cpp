#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st={1,2,5,7};

    st.erase(st.begin(), next(st.begin(),2));

    //for each loop
    for(auto i:st)
    {
        cout<<i<<" ";
    }
}