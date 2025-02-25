#include<bits/stdc++.h>
using namespace std;

//parameterized way
void print(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }

    print(i-1,sum+i);
}

//functional way
int sum(int i)
{
    if(i==0) return 0;

    return i+sum(i-1);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    //print(n,0);
    cout<<sum(n);
}