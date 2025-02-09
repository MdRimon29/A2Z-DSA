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
        char ch='A'+i;
        for(int j=0; j<=i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print17(int n)
{
    for(int i=0; i<n; i++)
    {
        char ch='A'+i;
        for(int j=0; j<=n-i-1; j++)
        {
            cout<<" ";
        }

        for(char ch='A'; ch<='A'+i; ch++)
        {
            cout<<ch;
        }

        for(char ch='A'+i-1; ch>='A'; ch--)
        {
            cout<<ch;
        }

        for(int j=0; j<=n-i-2; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void print18(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n-i-1; j<=n-1; j++)
        {
            char ch='A'+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print19(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"*";
        }
        
        for(int j=0; j<(2*i); j++)
        {
            cout<<" ";
        }

        for(int j=n; j>i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        
        for(int j=0; j<((2*n)-(2*i)); j++)
        {
            cout<<" ";
        }

        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void print20(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        
        for(int j=0; j<((2*n)-(2*i)); j++)
        {
            cout<<" ";
        }

        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"*";
        }
        
        for(int j=0; j<(2*i); j++)
        {
            cout<<" ";
        }

        for(int j=n; j>i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void print21(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 || i== n)
            {
                cout<<"*"<<" ";
            }
            else
            {
                if(j==1 || j==n)
                {
                    cout<< "*"<<" ";
                }
                else
                {
                    cout<<" "<<" ";
                }
            }
        }
        cout<<endl;
    }
}

void print22(int n)
{
    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;

            cout<<(n-min(min(top,bottom),min(left,right)));
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
        print22(n);
    }
}