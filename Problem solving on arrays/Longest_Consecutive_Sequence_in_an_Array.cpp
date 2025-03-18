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

int longestConsecutiveBetter(vector<int>&vec)
{ 
    sort(vec.begin(),vec.end());
    int longest=1,lastCount=0,lastElement=INT_MIN;

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]-1==lastElement)
        {
            lastCount ++;
            lastElement=vec[i];
        }
        else if(vec[i]==lastElement)
        {
            continue;
        }
        else if(vec[i]-1 != lastElement)
        {
            lastCount=1;
            lastElement=vec[i];
        }

        longest=max(longest,lastCount);
    }

    return longest;
}

int longestConsecutiveOptimal(vector<int>&vec)
{
    int n=vec.size();
    if(n==0) return 0;

    int longest=1;
    unordered_set<int>st;

    for(int i=0; i<n; i++)
    {
        st.insert(vec[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1) != st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }

    return longest;
}

int main()
{
    vector<int>vec={102,4,100,1,101,3,2,1,1};

    int result=longestConsecutiveOptimal(vec);

    cout<<"Longest consecutive is: "<<result<<endl;
}