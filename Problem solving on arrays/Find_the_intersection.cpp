#include<bits/stdc++.h>
using namespace std;

// tc= O(n1*n2)
// sc= O(n2)
vector<int> findIntersectionBrute(vector<int>&vec, vector<int>&vec2)
{
    vector<int>visitedArray(vec2.size(), 0);
    vector<int >intersection;
    
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=0; j<vec2.size(); j++)
        {
            if(vec[i]==vec2[j])
            {
                intersection.push_back(vec[i]);
                visitedArray[j]=1;
                break;
            }
            if(vec2[j]>vec[i])
            {
                break;
            }
        }
    }

    return intersection;
}

// tc= O(n1+n2)
// sc= O(1)
vector<int> findIntersectionOptimal(vector<int>&vec, vector<int>&vec2)
{
    vector<int>intersection;
    int i=0;
    int j=0;
    int n=vec.size();
    int m=vec2.size();

    while(i<n && j<m)
    {
        if(vec[i]<vec2[j])
        {
            i++;
        }
        else if(vec[i]>vec2[j])
        {
            j++;
        }
        else
        {
            intersection.push_back(vec[i]);
            i++;
            j++;
        }
    }

    return intersection;
}

int main()
{
    vector<int>vec={1,1,2,3,4,5};
    vector<int>vec2={2,3,4,5,6};

    vector<int >result=findIntersectionBrute(vec,vec2);

    for(auto it:result)
    {
        cout<<it<<" ";
    }
}