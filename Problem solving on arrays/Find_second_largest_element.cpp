#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int>&arr, int n)
{
    int largest=arr[0];
    int secondLargest=INT_MIN;

    for(int i=1; i<n; i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    vector<int>vec={1,4,3,5,7,7,9,9,2};
    int n=vec.size();

    int result=secondLargestElement(vec,n);

    cout<<"Second largest element is: "<<result<<endl;

    return 0;
}