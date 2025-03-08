#include<bits/stdc++.h>
using namespace std;

// tc=O(n log(n))+O(N) -->using order map
// tc=O(n) -->using unorder map
// sc=O(n) -->if all are unique element 
int majorityElementsBetter(vector<int>&vec){
    unordered_map<int, int>mpp;
    for(int i=0; i<vec.size(); i++)
    {
        mpp[vec[i]]++;
    }

    for(auto it: mpp){
        if(it.second >vec.size()/2){
            return it.first;
        }
    }

    return -1;
}

//Morre's voting algorithm
// tc= O(n)+O(n)
// sc=O(1)
int majorityElementsOptimal(vector<int>&vec){
    int count=0;
    int element;
    for(int i=0; i<vec.size(); i++){
        if(count==0){
            count++;
            element=vec[i];
        }
        else if(vec[i]==element){
            count++;
        }
        else{
            count--;
        }
    }

    int count2=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]==element) count2++;
    }
    if(count2>vec.size()/2) {
        return element;
    }

    return -1;
}

int main()
{
    vector<int>vec={2,2,1,3,1,1,3,1,1};

    int result=majorityElementsOptimal(vec);

    cout<<"Majority elememt is: "<<result<<endl;

    return 0;
}