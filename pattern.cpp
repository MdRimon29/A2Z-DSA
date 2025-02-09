#include<bits/stdc++.h>
using namespace std;

void print12(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j=1; j<=((n-i)*2); j++)
        {
            cout<<" ";
        }
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void print13(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            sum=sum+1;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}

void print14(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch='A'; ch<='A'+i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n)
{
    for(int i=n-1; i>=0; i--)
    {
        for(char ch='A'; ch<='A'+i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch='A'; ch<='A'+i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        print15(n);
    }
}