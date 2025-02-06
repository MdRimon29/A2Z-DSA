#include<bits/stdc++.h>
using namespace std;
int main()
{
    // lower_bound function 
    // returns an iterator pointing to the first element which is not less than x 
    // it works on a sorted array or vector
    // inside the lower bound binary search is implemented
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 10 
    // x = 6 
    // x = 13 
    // this works in log N 

    int n;
    int arr[n];
    int x;
 
    auto it = lower_bound(arr, arr+n, x); //it points iterators
    int ind = it - arr; 
 
    vector<int > vec;
    auto it = lower_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();
 
    int ind =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); 
}