#include<bits/stdc++.h>
using namespace std;

int calculatePower(int n,int m,int mid)
{
    long long power=1;
    for(int i=1; i<=n; i++)
    {
        power=power*mid;
        if(power>m) return 2;
    }
    
    if(power==m) return 1; 
    
    return 0;
}

int nthRoot(int n,int m)
{
    int low=1,high=m;

    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int value=calculatePower(n,m,mid);
        if(value==1)
        {
            return mid;
        }
        else if(value==2)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    return -1;
}

int main()
{
    int n=4;
    int m=69;

    int result=nthRoot(n,m);

    cout<<result<<endl;

    return 0;
}