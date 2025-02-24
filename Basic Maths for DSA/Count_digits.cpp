#include<bits/stdc++.h>
using namespace std;

void count_digits(int num)
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


//time complexity is log10(num) -->if divisible by 10
void another_way_count_digit(int num)
{
    int count=(int)(log10(num)+1);
    cout<<"The number of digits are: "<<count<<endl;
}

int main()
{
    int number=7789;
    count_digits(number);

    another_way_count_digit(number);

    return 0;
}