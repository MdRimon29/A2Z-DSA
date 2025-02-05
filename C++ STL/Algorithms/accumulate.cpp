#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin >> n; 
	int arr[n]; 
	for(int i = 0;i<n;i++) 
    {
        cin >> arr[i];
    }

    vector<int> vec(5, 0);
    for(int i = 0;i<n;i++) {
    	cin >> vec[i]; 
    }


    // I give you a range and I want you to find the sum in that range 
    // i - j, tell me the sum in that range i to j 
    int sum = 0;
    for(int k = i;k<=j;k++) {
    	sum += arr[k]; 
    }
 
    // accumulate(startIterator, endIterator, initialSum);
    int sum = accumulate(arr, arr+n, 0); 
    int sum = accumulate(vec.begin(), vec.end(), 0);
}