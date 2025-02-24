#include<bits/stdc++.h>
using namespace std;

void print_all_advance(int n)
{
    vector<int>vec;
    for(int i=1; i<= sqrt(n); i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if(n/i != i)
            {
                vec.push_back(n/i);
            }
        }
    }

    sort(vec.begin(), vec.end());

    for(auto it:vec) cout<<vec[it]<<" ";
}

void print_all(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    print_all(n);
}