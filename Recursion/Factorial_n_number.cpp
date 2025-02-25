#include<bits/stdc++.h>
using namespace std;

int factorial(int i)
{
    if(i==1) return 1;

    return i*factorial(i-1);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Factorial is: "<<factorial(n)<<endl;

    return 0;
}