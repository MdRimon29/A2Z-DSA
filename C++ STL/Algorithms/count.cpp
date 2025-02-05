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

    // arr[] -> [1, 6, 7, 1, 2, 1, 3] 
    // x = 1 
    // tell me how many times the element 1 occurs in the array 
    int cnt = 0;
    // O(N)
    int x=1;
    for(int i = 0;i<n;i++) {
    	if(arr[i] == x) {
    		cnt++; 
    	}
    } 
    cout << cnt; 
 
    /// count(firstIterator, lastIterator, x) 
    int cnt = count(arr, arr+n, 1);
    int cnt = count(vec.begin(), vec.end(), 1); 

}