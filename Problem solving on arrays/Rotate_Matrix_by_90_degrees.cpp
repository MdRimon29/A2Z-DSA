#include<bits/stdc++.h>
using namespace std;

//tc= O(n/2+n/2)
void rotate(vector<vector<int>>&vec)
{
    int n=vec.size();
    int m=vec[0].size();

    //create transpose matrix
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
    }
    //tc=O(n+n/2)
    for(int i=0; i<n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
}

int main()
{
    vector<vector<int>>vec={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    rotate(vec);

    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec[0].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}