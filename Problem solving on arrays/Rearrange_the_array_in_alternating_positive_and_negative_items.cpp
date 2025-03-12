#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrayBrute(vector<int>&vec)
{
    vector<int>posArr;
    vector<int>negArr;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]>=0){
            posArr.push_back(vec[i]);
        }
        else{
            negArr.push_back(vec[i]);
        }
    }
    for(int i=0; i<vec.size()/2; i++){
        vec[i*2]=posArr[i];
        vec[i*2+1]=negArr[i];
    }
    return vec;
}

vector<int> rearrangeArrayOptimal(vector<int>&vec)
{
    int pos=0,neg=1;
    int n=vec.size();
    vector<int>ans(n);
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]>=0)
        {
            ans[pos]=vec[i];
            pos +=2;
        }
        else{
            ans[neg]=vec[i];
            neg +=2;
        }
    }

    return ans;
}

int main()
{
    vector<int>vec={3,1,-2,-5,2,-4};

    vector<int>result=rearrangeArrayOptimal(vec);

    for(auto it:result)
    {
        cout<<it<<" ";
    }
}