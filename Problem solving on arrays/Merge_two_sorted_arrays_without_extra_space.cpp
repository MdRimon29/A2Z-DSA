#include<bits/stdc++.h>
using namespace std;

void margeOptimal(vector<int>&vec1,int m,vector<int>&vec2,int n)
{
    int left=m-1;
    int right=0;

    while(left>=0 && right<m)
    {
        if(vec1[left]>vec2[right])
        {
            swap(vec1[left],vec2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
}

int main()
{
    vector<int>vec1={1, 4, 8, 10};
    int m=vec1.size();
    vector<int>vec2={2, 3, 9};
    int n=vec2.size();

    margeOptimal(vec1,m,vec2,n);
    cout<<"vec1 is: ";
    for(auto it:vec1)
    {
        cout<<it<<" ";
    }
    cout<<endl<<"vec2 is:";
    for(auto it:vec2)
    {
        cout<<it<<" ";
    }
    return 0;
}