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

vector<vector<int>> threeSumBetter(vector<int>&vec)
{
    set<vector<int>>st;
    int n=vec.size();

    for(int i=0; i<n; i++)
    {
        set<int>hash;
        for(int j=i+1; j<n; j++)
        {
            int k=-(vec[i]+vec[j]);

            if(hash.find(k) != hash.end())
            {
                vector<int>vec2={vec[i],vec[j],k};
                sort(vec2.begin(),vec2.end());

                st.insert(vec2);
            }
            hash.insert(vec[j]);
        }
    }

    vector<vector<int>>vec3(st.begin(),st.end());

    return vec3;
}

vector<vector<int>> threeSumOptimal(vector<int>&vec)
{
    int n=vec.size();
    vector<vector<int>>vec2;
    sort(vec.begin(),vec.end());

    for(int i=0; i<n; i++)
    {
        if(i>0 && vec[i] == vec[i-1]) continue;
        int j=i+1;
        int k=n-1;

        while(j<k)
        {
            int sum=vec[i]+vec[j]+vec[k];
            if(sum>0)
            {
                k--;
            }
            else if(sum<0)
            {
                j++;
            }
            else{
                vector<int>vec3={vec[i],vec[j],vec[k]};
                vec2.push_back(vec3);
                j++;
                k--;
                while(j<k && vec[j]==vec[j-1]) j++;
                while(j<k && vec[k]==vec[k+1]) k--;
            }
        }
    }

    return vec2;
}

int main()
{
    vector<int>vec={-1,0,1,2,-1,-4};

    vector<vector<int>> result=threeSumOptimal(vec);

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