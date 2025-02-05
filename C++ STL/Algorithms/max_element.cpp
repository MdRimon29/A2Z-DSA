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


    // If i want to fine the maximum elements in any index range 
    // i to j give me the maximum 
    // *max_element(firstIterator, lastIterator); 
    int maxi = INT_MIN; 
    for(int k = i;k<=j;k++) // here i=0,j=n
    {
    	if(arr[k] > maxi) {
    		maxi = arr[k]; 
    	}
    }
 
 
    int el = *max_element(arr, arr+n); 
    int el = *min_element(arr, arr+n); 
 
 
    int el = *max_element(vec.begin(), vec.end()); 
    int el = *min_element(vec.begin(), vec.end()); 
}