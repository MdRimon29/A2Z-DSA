#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 5>arr={1,2,3,4,5};

    for(auto i=arr.end()-1; i>=arr.begin(); i--)
    {
        cout<<*i<<" ";
    }
}