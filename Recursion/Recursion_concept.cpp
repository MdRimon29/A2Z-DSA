#include<bits/stdc++.h>
using namespace std;

int cnt=0;

//when a function call itself
//until a specified condition is met
void print()
{
    if(cnt==3) return;
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main()
{
    print();
}