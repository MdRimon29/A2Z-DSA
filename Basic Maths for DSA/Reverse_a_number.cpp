#include<bits/stdc++.h>
using namespace std;

void rev_number(int num)
{
    int reverse_number=0;
    while(num>0)
    {
        int last_digit=num%10;
        num=num/10;
        reverse_number=(reverse_number*10)+last_digit;
    }
    cout<<"Reverse number is: "<<reverse_number<<endl;
}

int main()
{
    int number=7789;
    rev_number(number);

    return 0;
}