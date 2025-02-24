#include<bits/stdc++.h>
using namespace std;

void all_digits(int num)
{
    int count=0;

    while(num>0)
    {
        int remainder=num%10;
        num=num/10;

        count++;
    }
    cout<<"The number of digits are: "<<count<<endl;
}

int main()
{
    int number=7789;
    all_digits(number);

    return 0;
}