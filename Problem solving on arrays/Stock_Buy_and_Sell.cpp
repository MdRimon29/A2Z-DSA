#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&vec)
{
    int maxprofit=0;
    int minimum=vec[0];

    for(int i=1; i<vec.size(); i++)
    {
        int profit=vec[i]-minimum;
        maxprofit=max(profit,maxprofit);

        minimum=min(minimum,vec[i]);
    }

    return maxprofit;
}

int main()
{
    vector<int>vec={7,1,5,3,6,4};
    
    int result=maxProfit(vec);

    cout<<"Result is : "<<result<<endl;

    return 0;
}