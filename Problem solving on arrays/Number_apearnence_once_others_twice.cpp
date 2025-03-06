#include<bits/stdc++.h>
using namespace std;
// tc=O(n^2)
// sc=O(1)
int numberOnceBrute(vector<int>&vec)
{
    //int count=0;
    for(int i=0; i<vec.size(); i++)
    {
        int count=0;
        int number=vec[i];
        for(int j=0; j<vec.size(); j++)
        {
            if (number==vec[j])
            {
                count++;
            }
        }
        if(count==1)
        return vec[i];
    }
    return -1;
}

int numberOnceOptimal(vector<int>&vec)
{
    int XOR=0;
    for(int i=0; i<vec.size(); i++)
    {
        XOR=XOR ^ vec[i];
    }

    return XOR;
}

int main()
{
    vector<int>vec={1,1,2,3,3,4,4};

    int result=numberOnceOptimal(vec);
    cout<<"Result is: "<<result<<endl;
}