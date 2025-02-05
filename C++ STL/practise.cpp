#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec={1, 6, 7, 1, 2, 1, 3};

	auto it = find(vec.begin(), vec.end(), 2); 
    int ind = it - vec.begin();

	cout<<ind;
}