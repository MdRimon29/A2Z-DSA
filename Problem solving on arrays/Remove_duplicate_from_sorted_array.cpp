#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>&vec, int n)
{
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(vec[j]!=vec[i])
        {
            vec[i+1]=vec[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    vector<int>vec={1,1,2,2,2,3,3};
    int n=vec.size();

    int result=removeDuplicates(vec,n);

    cout<<"New length is: "<<result<<endl;

    return 0;
}