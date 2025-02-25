#include<bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i<1) return;
    print(i-1,n);
    cout<<n-i+1<<endl;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    print(n,n);
}