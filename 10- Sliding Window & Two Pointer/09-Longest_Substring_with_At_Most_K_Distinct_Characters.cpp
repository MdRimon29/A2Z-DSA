#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s,int k){
    int maxi=0;
    unordered_map<char,int>mpp;

    for(int i=0; i<s.size(); i++)
    {
        mpp.clear();
        for(int j=i; j<s.size(); j++)
        {
            mpp[s[j]]++;
            if(mpp.size()<=k)
            {
                maxi=max(maxi,(j-i+1));
            }
            else{
                break;
            }
        }
    }
    return maxi;
}

int main()
{
    string s="aaabbccd";
    int k=2;
    
    int result=longestSubstring(s,k);

    cout<<result<<endl;

    return 0;
}