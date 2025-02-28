#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    //pre storing
    unordered_map<char,int>mpp;
    for(int i=0; i<str.length(); i++)
    {
        mpp[str[i]]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;

        //fetch
        
        cout<<mpp[ch]<<endl;
    }
}