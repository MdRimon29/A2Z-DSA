#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSumBrute(vector<int>&vec)
{
    set<vector<int>>st;
    int n=vec.size();

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                for(int l=k+1; l<n; l++)
                {
                    if(vec[i]+vec[j]+vec[k]+vec[l]==0)
                    {
                        vector<int>vec2={vec[i],vec[j],vec[k],vec[l]};
                        sort(vec2.begin(),vec2.end());

                        st.insert(vec2);
                    }
                }
            }
        }
    }
    vector<vector<int>>vec3(st.begin(),st.end());

    return vec3;
}

vector<vector<int>> fourSumBetter(vector<int>&vec)
{
    set<vector<int>>st;
    int n=vec.size();

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            set<int>hash;
            for(int k=j+1; k<n; k++)
            {
                int l=-(vec[i]+vec[j]+vec[k]);

                if(hash.find(l) != hash.end())
                {
                    vector<int>vec2={vec[i],vec[j],vec[k],l};
                    sort(vec2.begin(),vec2.end());

                    st.insert(vec2);
                }
                hash.insert(vec[k]);
            }
        }
    }

    vector<vector<int>>vec3(st.begin(),st.end());

    return vec3;
}

int main()
{
    vector<int>vec={1,0,-1,0,-2,2};

    vector<vector<int>> result=fourSumBetter(vec);

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