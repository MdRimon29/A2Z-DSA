#include<bits/stdc++.h>
using namespace std;

void print(int i,int n)
{
    if(i>n) return;
    cout<<i<<endl;
    i++;
    print(i,n);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    print(1,n);
}