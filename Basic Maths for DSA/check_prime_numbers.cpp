#include<bits/stdc++.h>
using namespace std;

//time complexity is 0(sqrt(n))

void check_prime(int n)
{
    int count=0;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        } 
    }

    if(n != 1 && count==2)
    {
        cout<<"It is a prime number.";
    }
    else{
        cout<<"It is not a prime number.";
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    check_prime(n);
}