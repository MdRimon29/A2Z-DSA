#include<bits/stdc++.h>
using namespace std;

//using DNF algorithm
void sortArray(vector<int>& nums) {
    int left=0,mid=0,right=nums.size()-1;

    while(mid<=right)
    {
        if(nums[mid]==0){
            swap(nums[left],nums[mid]);
            left++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[right]);
            right--;

        }
    }
}

int main()
{
    vector<int>vec={2,0,1};

    sortArray(vec);

    for(auto it:vec){
        cout<<it<<" ";
    }
}