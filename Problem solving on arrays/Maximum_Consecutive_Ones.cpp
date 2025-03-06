#include<bits/stdc++.h>
using namespace std;

int maximumOne(vector<int>&vec, int n)
{
    int maximum=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]==1)
        {
            count++;
            maximum=max(count,maximum);
        }
        else{
            count=0;
        }
    }

    return maximum;
}

int main()
{
    vector<int>vec={1,1,0,1,1,1,0,0,1,1};
    int n=vec.size();

    int result=maximumOne(vec,n);
    
    cout<<"Maximum number is: "<<result<<endl;
}