#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>&arr, int n)
{
    int largest=arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    return largest;
}

int main()
{
    vector<int>vec={1,4,3,5,2};
    int n=vec.size();

    int result=largestElement(vec,n);

    cout<<"Largest element is: "<<result<<endl;

    return 0;
}