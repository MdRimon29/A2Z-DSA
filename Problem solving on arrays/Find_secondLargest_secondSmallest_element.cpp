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
        else if(arr[i]<largest && arr[i]>secondLargest)
        {
            secondLargest=arr[i];
        }
    }

    return secondLargest;
}

int secondSmallestElement(vector<int>&arr, int n)
{
    int smallest=arr[0];
    int secondSmallest=INT_MAX;

    for(int i=1; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondSmallest)
        {
            secondSmallest=arr[i];
        }
    }

    return secondSmallest;
}

int main()
{
    vector<int>vec={1,4,3,5,7,7,9,9,2};
    int n=vec.size();

    int result=secondLargestElement(vec,n);
    int result2=secondSmallestElement(vec,n);

    cout<<"Second largest element is: "<<result<<endl;
    cout<<"Second smallest element is: "<<result2<<endl;

    return 0;
}