#include<bits/stdc++.h>
using namespace std;

void frequency(int n, int arr[])
{
    unordered_map<int,int>mpp;

    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }

    int max_freq=0,min_freq=INFINITY,max_freq_ele=0,min_freq_ele=0;
    for(auto it:mpp)
    {
        int count=it.second;
        int element=it.first;

        if(count>max_freq)
        {
            max_freq=count;
            max_freq_ele=element;
        }
        if(count<min_freq)
        {
            min_freq=count;
            min_freq_ele=element;
        }
    }

    cout<<"Max frequency element is: "<<max_freq_ele<<endl;
    cout<<"Min frequency element is: "<<min_freq_ele<<endl;
}

int main()
{
    int arr[]={10, 5, 10, 15, 10, 5};
    int n=sizeof(arr)/sizeof(arr[0]);

    frequency(n,arr);
}