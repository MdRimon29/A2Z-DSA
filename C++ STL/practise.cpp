#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);
    ms.insert(2);
    ms.insert(4);
    ms.insert(4);

    for(auto it:ms)
    {
        cout<<it<<" ";
    }

    ms.erase(ms.find(2)); 
	ms.erase(ms.find(2), next(ms.find(2) , 1));

    for(auto it:ms)
    {
        cout<<it<<" ";
    }

}