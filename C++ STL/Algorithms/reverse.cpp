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

    // If I wanna reverse
    // reverse(startIterator, endIterator) -> [)  
    reverse(arr, arr+n); 
 
    reverse(arr + 1, arr + 4); 
 
    reverse(vec.begin(), vec.end()); 
 
    reverse(vec.begin() + 1, vec.begin() + 4); 
}