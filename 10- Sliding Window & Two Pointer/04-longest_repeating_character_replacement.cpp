#include<bits/stdc++.h>
using namespace std;

// tc=O(n*n)
// sc=O(26) -->worst
int characterReplacementBrute(string s, int k){
    int maxlen=0;
    for(int i=0; i<s.size(); i++)
    {
        unordered_map<char,int>mpp;
        int maxFreq=0,diff=0;
        for(int j=i; j<s.size(); j++)
        {
            mpp[s[i]]++;
            maxFreq=max(maxFreq,mpp[s[i]]);
            diff=(j-i+1)-maxFreq;

            if(diff<=k){
                maxlen=max(maxlen,(j-i+1));
            }
            else{
                break;
            }
        }
    }

    return maxlen;
}

// tc->O(n)
// sc->O(3) ~ O(1) -->as it is constant size complexity
int characterReplacement(string s, int k) {
    int left=0,right=0;
    int n=s.size();
    int diff=0,maxfreq=0,maxSum=0;
    unordered_map<char,int>mpp;

    while(right<n)
    {
        mpp[s[right]]++;
        maxfreq=max(maxfreq,mpp[s[right]]);
        diff=(right-left+1)-maxfreq;
        if(diff>k)
        {
            mpp[s[left]]--;
            left++;
        }

        if(diff<=k){
            maxSum=max(maxSum,right-left+1);
        }

        right++;
    }

    return maxSum;
}

int main()
{
    string s="ABAB";
    int k=2;

    int result=characterReplacement(s,k);

    cout<<result<<endl;

    return 0;
}