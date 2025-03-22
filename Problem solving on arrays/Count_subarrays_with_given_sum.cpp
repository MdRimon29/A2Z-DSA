#include<bits/stdc++.h>
using namespace std;

int subarraySumBrute(vector<int>&vec,int k)
{
    int count=0;
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=i; j<vec.size(); j++)
        {
            int sum=0;
            for(int z=i; z<=j; z++)
            {
                sum=sum+vec[z];
            }
            if(sum==k)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    vector<int>vec={1,2,3};
    int k=3;

    int result=subarraySumBrute(vec,k);

    cout<<"Result is : "<<result<<endl;

    return 0;
}