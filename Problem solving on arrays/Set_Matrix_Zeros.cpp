#include<bits/stdc++.h>
using namespace std;

void setZerosBetter(vector<vector<int>>&vec , int n, int m)
{
    int col[n]={0};
    int row[m]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vec[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(col[i]==1 || row[j]==1)
            {
                vec[i][j]=0;
            }
        }
    }
}

int main()
{
    vector<vector<int>>vec={{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
    int n=vec.size();
    int m=vec[0].size();

    setZerosBetter(vec,n,m);

    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}