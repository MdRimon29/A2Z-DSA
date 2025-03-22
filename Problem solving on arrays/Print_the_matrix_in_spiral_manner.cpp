#include<bits/stdc++.h>
using namespace std;

vector<int> printSpiralMatrix(vector<vector<int>>&vec)
{
    vector<int>vec2;

    int n=vec.size();
    int m=vec[0].size();
    int left=0,right=m-1,top=0,bottom=n-1;

    while(top<=bottom && left<=right)
    {
        for(int i=left; i<=right; i++)
        {
            vec2.push_back(vec[top][i]);
        }
        top++;

        for(int i=top; i<=bottom; i++)
        {
            vec2.push_back(vec[i][right]);
        }
        right--;

        
        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
            {
                vec2.push_back(vec[bottom][i]);
            }
            bottom--;
        }

        if(left<=right)
        {
            for(int i=bottom; i>=top; i--)
            {
                vec2.push_back(vec[i][left]);
            }
            left++;
        }
    }

    return vec2;
}

int main()
{
    vector<vector<int>>vec={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int>vec2=printSpiralMatrix(vec);

    for(int i=0; i<vec2.size(); i++)
    {
        cout<<vec2[i]<<" ";
    }

    return 0;
}