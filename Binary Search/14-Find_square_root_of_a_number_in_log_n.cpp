#include<bits/stdc++.h>
using namespace std;

int peakElement(int num)
{
    int low=1,high=num;
    int ans=-1;

    while(low<=high)
    {
        long long mid=(low+high)/2;
        long long value=mid*mid;
        if(value<=(long long)num)
        {
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return ans;
}

int main()
{
    int num=10;

    int result=peakElement(num);

    cout<<result<<endl;
}