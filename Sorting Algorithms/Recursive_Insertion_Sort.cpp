#include<bits/stdc++.h>
using namespace std;

//insertion sort just take an element and place it in the correct index while compare with its left indexes
//worst,avg time complexity is O(n^2)
//best time complexity is O(n)
//sc -> O(n)
void insertionSort(vector<int>&vec,int i,int n)
{
    if(i==n) return;
    int j=i;
    while(j>0 && vec[j-1]>vec[j])
    {
        int temp=vec[j];
        vec[j]=vec[j-1];
        vec[j-1]=temp;

        j--;
    }

    insertionSort(vec,i+1,n);
}


int main()
{
    int n,i;
    cin>>n;
    vector<int>vec(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }

    insertionSort(vec,i,n);
    
    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
}