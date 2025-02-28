#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        //pre-compute
        mpp[arr[i]]++;
    }

    //iterate in the map
    // for(auto it:mpp)
    // {
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;

        //fetch
        cout<<mpp[number]<<endl;
    }
}