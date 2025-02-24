#include<bits/stdc++.h>
using namespace std;

void check_armstrong(int n)
{
    int temp_num=n;
    int new_num=0;
    int digit=(int)(log10(n)+1);

    while(temp_num>0)
    {
        int remainder=temp_num%10;
        new_num=new_num+pow(remainder,digit);
        temp_num=temp_num/10;
    }

    if(new_num==n)
    {
        cout<<"Entered number is armstrong."<<endl;
    }
    else{
        cout<<"Entered number is not armstrong."<<endl;
    }
}

int main()
{
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    check_armstrong(number);

    return 0;
}