#include<bits/stdc++.h>
using namespace std;
int main()
{
    // sorting 
	// array, vector 
	int n;
	cin >> n; 
	int arr[n]; 
	for(int i = 0;i<n;i++) cin >> arr[i]; 
	// takes n log n 
	sort(arr, arr+n); // in increasing order  
	// sort from 1 to 3 
	sort(arr + 1, arr + 4); 
 
    vector<int> vec(5, 0);
    for(int i = 0;i<n;i++) {
    	cin >> vec[i]; 
    }
 
    sort(vec.begin(), vec.end()); // [)
 
    // vec -> {1, 6, 2, 7, 4} 
    //         0  1  2  3  4 
    // sort it so that only indexes from 1 to 3  
    // final vec -> {1, 2, 6, 7, 4}
    sort(vec.begin() + 1, vec.begin() + 4); // [1, 4)
}