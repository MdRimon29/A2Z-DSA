#include<bits/stdc++.h>
using namespace std;
int main()
{
    // upper bound 
    // returns an iterator which points to an element which is just greater than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 7 
    // x = 6 
    // x = 12 -> end() iterator 
    // x = 15 -> end() iterator 
    
    int n;
    int arr[n];
    int x;

    auto it = upper_bound(arr, arr+n, x); 
    int ind = it - arr; 
    
    vector<int > vec;
    auto it = upper_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();
 
    int ind =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();
}