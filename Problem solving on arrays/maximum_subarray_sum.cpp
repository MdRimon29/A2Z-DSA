#include<bits/stdc++.h>
using namespace std;

int maxSubarrayBrute(vector<int>&vec){
    int maximum=INT_MIN;
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=i; j<vec.size(); j++)
        {
            int count=0;
            for(int k=i; k<j; k++)
            {
                count+=vec[k];
                if(maximum<count)
                {
                    maximum=count;
                }
            }
        }
    }

    return maximum;
}

int maxSubarrayBetter(vector<int>&vec){
    int maximum=INT_MIN;
    for(int i=0; i<vec.size(); i++)
    {
        int count=0;
        for(int j=i; j<vec.size(); j++)
        {
            count+=vec[j];
            maximum=max(count,maximum);
        }
    }

    return maximum;
}

int maxSubarray(vector<int>&vec) {
    int sum=0;
    int maximum=INT_MIN;
    for(int i=0; i<vec.size(); i++)
    {
        sum +=vec[i];
        if(sum<0)
        {
            sum=0;
        }
        else
        {
            maximum=max(maximum,sum);
        }
    }


    return maximum;
}

int main(){
    vector<int>vec={-2,1,-3,4,-1,-2,1,5,-3};

    int result=maxSubarray(vec);

    cout<<"Result is: "<<result<<endl;
}