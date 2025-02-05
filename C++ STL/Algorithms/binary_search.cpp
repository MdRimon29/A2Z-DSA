#include<bits/stdc++.h>
using namespace std;
int main()
{
    // binary search 
    // this stl only works on SORTED arrrays
    // arr[] -> {1, 5, 7, 9, 10} 
    // x = 9
    // true -> 9 exists in my arr 
    // x = 8 
    // false -> 8 does not exist in my arr 
 
 
    // binary_search(firstIterator, lastIterator, x)
    // returns a true or returns a false 
    // works in log n complexity 
    int arr[]={1, 5, 7, 9, 10};
    vector<int> vec={1, 5, 7, 9, 10};
    int n=5;
    
    bool res = binary_search(arr, arr+n, 8); 
    bool res = binary_search(vec.begin(), vec.end(), 8); 
}