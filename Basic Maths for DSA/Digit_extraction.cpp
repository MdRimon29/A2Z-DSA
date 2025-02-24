#include<bits/stdc++.h>
using namespace std;

void all_digits(int num)
{
    while(num>0)
    {
        int remainder=num%10;
        cout<<remainder<<" ";
        num=num/10;
    }
}

int main()
{
    int number=7789;
    all_digits(number);

    return 0;
}