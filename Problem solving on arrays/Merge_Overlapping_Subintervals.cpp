#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> margeSubintervalsBrute(vector<vector<int>>&nums)
{
    vector<vector<int>>ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++)
    {
        int start=nums[i][0];
        int finish=nums[i][1];
        if(!ans.empty() && ans.back()[1]>=finish)
        {
            continue;
        }
        for(int j=i+1; j<n; j++)
        {
            if(nums[j][0]<=finish)
            {
                finish=max(finish,nums[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start,finish});
    }

    return ans;
}

vector<vector<int>> margeSubintervalsOptimal(vector<vector<int>>&intervals)
{
    vector<vector<int>>ans;
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    for(int i=0; i<n; i++)
    {
        if(ans.empty() || intervals[i][0]>ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>>vec={{1, 3}, {8, 10}, {2, 6}, {15, 18}};

    vector<vector<int>> result=margeSubintervalsOptimal(vec);

    for (auto it : result) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }

    return 0;
}