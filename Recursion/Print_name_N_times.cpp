#include<bits/stdc++.h>
using namespace std;

//time complexity is 0(n)
//space complexity is 0(n)
void print(int i,int n)
{
    if(i>n) return;
    cout<<"Rimon"<<endl;
    i++;
    print(i,n);
}

int main()
{
    int n;
    cout<<"Enter how many time you want to see the name: ";
    cin>>n;

    print(1,n);
}