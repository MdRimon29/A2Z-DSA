#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n,vector<int>&vec,int num)
{
    for(int i=0; i<n; i++)
    {
        if(vec[i]==num)
        {
            return num;
        }
    }
    return -1;
}

int main()
{
    vector<int>vec={2,3,5,1,4,0,7,8};
    int n=vec.size();
    int num=4;

    int result=linearSearch(n,vec,num);
    if(result != -1)
    {
        cout<<"num find in index "<<result<<endl;
    }
    else{
        cout<<"num doesnt exist"<<endl;
    }
}