#include<bits/stdc++.h>
using namespace std;

int main()
{
    // given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 
 
	// output 
	// 3
 
 
	int n;
	cin >> n; 
	map<int,int> mpp; 
	int maxi = 0; 
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << maxi << endl; 

    // given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 
 
	// output 
	// 2 3 3 5 6 6 
 
	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}
 
	for(auto it : ms) {
		cout << it << endl; 
	}
}