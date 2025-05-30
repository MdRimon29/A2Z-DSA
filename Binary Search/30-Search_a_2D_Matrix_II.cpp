#include<bits/stdc++.h>
using namespace std;

//time complexity is O(n+m)
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n=matrix.size(),m=matrix[0].size();
    int row=0,col=m-1;

    while(row<n && col>=0)
    {
        if(matrix[row][col]==target){
            return true;
        }
        else if(matrix[row][col]<target){
            row +=1;
        }
        else{
            col -=1;
        }
    }

    return false;
}

int main()
{
    vector<vector<int>>vec={{1,4,7,11,15},
                            {2,5,8,12,19},
                            {3,6,9,16,22},
                            {10,13,14,17,24},
                            {18,21,23,26,30}};
    int target=23;

    bool result=searchMatrix(vec,target);
    if(result==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}