#include<bits/stdc++.h>
using namespace std;

//In bubble sort,push the maximum to the last index by the adjacent swaps
//worst,avg time complexity is O(n^2)
//best time complexity is O(n)
//sc -> O(n)
void bubbleSort(vector<int>&vec,int n)
{
    if(n==1) return;
    bool flag=false;
    for(int i=0; i<n-1; i++)
    {
        if(vec[i]>vec[i+1])
        {
            int temp=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=temp;

            flag=true;
        }
    }
    if(!flag) return;

    bubbleSort(vec,n-1);
}


int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    bubbleSort(vec,n);
    
    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
}