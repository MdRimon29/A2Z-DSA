#include<bits/stdc++.h>
using namespace std;

int daysNeeded(vector<int>& weights,int mid)
{
    int days=1;
    int sum=0;
    for(int i=0; i<weights.size(); i++)
    {
        sum+=weights[i];
        if(sum>mid)
        {
            days+=1;
            sum=weights[i];
        }
    }

    return days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int n=weights.size();

    int low=*max_element(weights.begin(),weights.end()),high=accumulate(weights.begin(),weights.end(),0);

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        int newDays=daysNeeded(weights,mid);

        if(newDays<=days)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}

int main()
{
    vector<int>vec={1,2,3,4,5,6,7,8,9,10};
    int days=5;

    int result=shipWithinDays(vec,days);
    cout<<result<<endl;

    return 0;
}