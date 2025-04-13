#include<bits/stdc++.h>
using namespace std;

double findKthSortedArrays(vector<int>& nums1, vector<int>& nums2,int k) {
    int n1=nums1.size(),n2=nums2.size();

    if(n1>n2) return findKthSortedArrays(nums2,nums1,k);
    int low=max(0,(k-n1)),high=min(k,n1);

    int left=(n1+n2+1)/2;
    int n=n1+n2;

    while(low<=high)
    {
        int mid1=low+(high-low)/2;
        int mid2=left-mid1;
        int l1=INT_MIN,l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;
        if(mid1 < n1) r1=nums1[mid1];
        if(mid2 < n2) r2=nums2[mid2];
        if(mid1-1 >= 0) l1=nums1[mid1-1];
        if(mid2-1 >= 0) l2=nums2[mid2-1];

        if((l1<=r2) && (l2<=r1)){
            return max(l1,l2);
        }
        else if(l1>r2){
            high=mid1-1;
        }
        else{
            low=mid1+1;
        }
    }

    return 0.0;
}

int main()
{
    vector<int>vec1={1,2,4,7,8};
    vector<int>vec2={3,5,6,9};
    int k=5;

    double result=findKthSortedArrays(vec1,vec2,k);

    cout<<result<<endl;

    return 0;
}