#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&vec,int num)
{
    int n=vec.size();
    for(int i=0; i<n; i++)
    {
        if(vec[i]==num)
        {
            return true;
        }
    }
    return false;
}

int longestConsecutiveBrute(vector<int>&vec)
{ 
    int longest=1;
    for(int i=0; i<vec.size(); i++)
    {
        int count=1;
        int x=vec[i];
        while(linearSearch(vec,x+1)==true)
        {
            x=x+1;
            count +=1;
        }
        longest=max(longest,count);
    }

    return longest;
}

int main()
{
    vector<int>vec={102,4,100,1,101,3,2,1,1};

    int result=longestConsecutiveBrute(vec);

    cout<<"Longest consecutive is: "<<result<<endl;
}