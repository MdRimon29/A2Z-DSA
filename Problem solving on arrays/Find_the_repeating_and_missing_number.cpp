#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    vector<int>vec={1,2,3,2};

    vector<int>result=findRepeatingAndMissingBetter(vec);
    
    cout<<"Repeating number is: "<<result[0]<<endl;
    cout<<"Missing number is: "<<result[1]<<endl;

    return 0;
}