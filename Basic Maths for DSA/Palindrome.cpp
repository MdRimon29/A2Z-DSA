#include<bits/stdc++.h>
using namespace std;

void check_palindrome(int n)
{
    int temp_num=n;
    int new_num=0;
    while(temp_num>0)
    {
        int remainder=temp_num%10;
        new_num=(new_num*10)+remainder;
        temp_num=temp_num/10;
    }

    if(new_num==n)
    {
        cout<<"Entered number is palindrome."<<endl;
    }
    else{
        cout<<"Entered number is not palindrome."<<endl;
    }
}

int main()
{
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    check_palindrome(number);

    return 0;
}