#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Next Permutation 
    // time complexity O(n)
    // all possible permutation= n!
    // string s = "abc"
    // all permutations are as follows: 
 
    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba
 
 
 
    // s = "bca" 
    bool res = next_permutation(s.begin(), s.end()); 
 
    // s = "cba"
    bool res = next_permutation(s.begin(), s.end()); 
 
    // if I give you any random string s = "bca"
    // i want you to print all the permutations 
 
    string s = "bca"; 
    sort(s.begin(), s.end()); // this makes the string as "abc"
    do {
    	cout << s << endl; 
    } while(next_permutation(s.begin(), s.end())); 

    int arr[] = {1, 6, 5}; 
    int n = 3; 
    sort(arr, arr + n); // this makes the array as {1, 5, 6}
    do {
    	for(int i = 0;i<n;i++) cout << arr[i] << " "; 
    	cout << endl; 
    } while(next_permutation(arr, arr+n)) ; 
 
 
    // prev permutation 
    bool res = prev_permutation(s.begin(), s.end());
}