#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    //pre storing
    //int hash[26]={0}; //for just capital/small letter
    int hash[256]={0};
    for(int i=0; i<str.length(); i++)
    {
        //hash[str[i] -'a']++; //for small letter
        //hash[str[i] -'A']++; //for capital letter
        hash[str[i]]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;

        //fetch
        
        //cout<<hash[ch-'a']<<endl;   //for small letter
        //cout<<hash[ch-'A']<<endl;   //for capital letter
        cout<<hash[ch]<<endl;   //for small letter
    }
}