#include<bits/stdc++.h>
using namespace std;

int countSubarrayBrute(vector<int>&vec,int k)
{
    int n=vec.size();
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int XOR=0;
            for(int k=i; k<=j; k++)
            {
                XOR=XOR^vec[k];
            }
            if(XOR==k)
            {
                count++;
            }
        }
    }
    return count;
}

int countSubarrayBetter(vector<int>&vec,int k)
{
    int n=vec.size();
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int XOR=0;
            XOR=XOR^vec[j];
            if(XOR==k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int>vec={4, 2, 2, 6, 4};
    int k=6;

    int number=countSubarrayBetter(vec,k);

    cout<<"Total subarray is: "<<number<<endl;

    return 0;
}