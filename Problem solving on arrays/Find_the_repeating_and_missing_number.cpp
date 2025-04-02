#include<bits/stdc++.h>
using namespace std;

// tc->O(2n)
// sc->O(n)
vector<int> findRepeatingAndMissingBetter(vector<int>&nums)
{
    int n=nums.size();
    int hash[n+1]={0};
    for(int i=0; i<n; i++)
    {
        hash[nums[i]]++;
    }

    int repeating=-1,missing=-1;
    for(int i=1; i<n+1; i++)
    {
        if(hash[i]==2)
        {
            repeating=i;
        }
        else if(hash[i]==0)
        {
            missing=i;
        }

        if(repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating,missing};
}

// tc= O(n)
// sc= O(1)
vector<int> findRepeatingAndMissingOptimal1(vector<int>&nums)
{
    //S-Sn
    //S2-S2n
    int n=nums.size();
    long long Sn=(n*(n+1))/2;
    long long S2n=(n*(n+1)*(2*n+1))/6;

    long long S=0,S2=0;
    for(int i=0; i<n; i++)
    {
        S+=nums[i];
        S2 += nums[i]*nums[i];
    }

    long long val1=S-Sn;    //x-y
    long long val2=S2-S2n;  //x^2-y^2
    val2=val2/val1; //x+y

    long long x=(val1+val2)/2;
    long long y=x-val1;

    return {(int)x,(int)y};
}

int main()
{
    vector<int>vec={1,2,3,2};

    vector<int>result=findRepeatingAndMissingOptimal1(vec);
    
    cout<<"Repeating number is: "<<result[0]<<endl;
    cout<<"Missing number is: "<<result[1]<<endl;

    return 0;
}