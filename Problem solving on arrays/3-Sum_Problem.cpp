#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumBrute(vector<int>&vec)
{
    set<vector<int>>st;
    int n=vec.size();

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(vec[i]+vec[j]+vec[k]==0)
                {
                    vector<int>vec2={vec[i],vec[j],vec[k]};
                    sort(vec2.begin(),vec2.end());

                    st.insert(vec2);
                }
            }
        }
    }
    vector<vector<int>>ans{st.begin(),st.end()};

    return ans;
}

int main()
{
    vector<int>vec={-1,0,1,2,-1,-4};

    vector<vector<int>> result=threeSumBrute(vec);

    for(int i=0; i<result.size(); i++)
    {
        for(int j=0; j<result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}