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

// tc=O(n.1) -->for worst case it would be O(n.log(n))
// sc=O(n) -->every time it added something new to the map by using mpp[XOR]++;
int countSubarrayOptimal(vector<int>&vec,int k)
{
    unordered_map<int,int>mpp;
    int n=vec.size();
    int count=0;
    int XOR=0;
    mpp[0]=1;
    for(int i=0; i<n; i++)
    {
        // prefix XOR till index i:
        XOR = XOR ^ vec[i];

        //By formula: x = xr^k:
        int x = XOR ^ k;

        // add the occurrence of xr^k
        // to the count:
        count += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[XOR]++;
    }
    return count;
}

int main()
{
    vector<int>vec={4, 2, 2, 6, 4};
    int k=6;

    int number=countSubarrayOptimal(vec,k);

    cout<<"Total subarray is: "<<number<<endl;

    return 0;
}