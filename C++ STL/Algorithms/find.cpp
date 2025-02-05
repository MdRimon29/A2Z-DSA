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

    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    // i want you to find the first occurrence of x=2
    // it is in the index 1 
    int x=2;
    int ind = -1; 
    for(int i = 0;i<n;i++) {
    	if(arr[i] == x) {
    		ind = i;
    		break;
    	}
    }
    cout << ind;
 
 
    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    auto it = find(arr, arr+n, 2); // return an iterator 
    // pointing to the first instance of it, or else it 
    // returns pointing to the end() if it is not there 
 
    int ind = it - arr; 
 
 
    auto it = find(vec.begin(), vec.end(), 2); 
    int ind = it - vec.begin(); 
 
 
    // arr[] -> {1, 5, 6, 2, 3, 5, 6}
    // x = 4 
    auto it = find(vec.begin(), vec.end(), 4); 
    if(it == vec.end()) {
    	cout << "element is not present"; 
    }
    else {
    	cout << "Element is first present at: " << it - vec.begin(); 
    }
}