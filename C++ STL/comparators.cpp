#include<bits/stdc++.h>
using namespace std;
int main()
{
    // COMPARATOR 
    sort(arr, arr+n); // sorts everything in ascending order
    sort(arr, arr+n, comp); 
 
 
    // descending 
    sort(arr, arr+n, comp); 
    // greater<int> is an inbuilt comparator which works only if you wanna do this in descending 
    sort(arr, arr+n, greater<int>);

    bool comp(int el1, int el2) {
        if(el1 <= el2) {
            return true; 
        }
        return false; 
    }
    
    bool comp(pair<int,int> el1, pair<int,int> el2) {
        if(el1.first < el2.first) {
            return true; 
        }
        if(el1.first == el2.first) {
            if(el1.second > el2.second) {
                return true; 
            }
        }
        return false; 
    }

    // arr 
    // pair<int,int> arr[] = {{1, 4},{5, 2},{5, 9}};
    // after sorting arr[] = {{1, 4}, {5, 9}, {5, 2}}
    sort(arr, arr+3, comp); 
    
    // sorts in ascending according to first 
    // if first is equal then sorts according to second in ascending 
    sort(arr, arr+3);
    // i want you to sort this in such a way 
    // that the element who have first element in pair smaller
    // appears first, and if first is equal then sort according 
    // to second and keep the larger second

    // question of pair 
    sort(arr, arr+n, greater<pair<int,int>>);
 
 
    vector<vector<int>> vec(n, vectorM<int>(n, 0));
}