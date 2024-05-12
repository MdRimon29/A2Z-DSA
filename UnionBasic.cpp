#include<bits/stdc++.h>
using namespace std;

union car
{
    int price;
    char logo;
    float weight;
};//this semicolon is must

int main()
{
    union car c1;
    
    c1.price=28000000;
    cout<<c1.price<<endl;
    
    c1.logo='R';
    cout<<c1.logo<<endl;
    
    c1.weight=1285.43;
    cout<<c1.weight<<endl;

    cout<<c1.price<<endl;//output is a gerbage value
    cout<<c1.logo<<endl;//output is a gerbage value
    cout<<c1.weight<<endl;//putput give right value

    return 0;
}

// union mainly use to achive memory efficiency
// its overwrite one after another and added new variables in that same memory space