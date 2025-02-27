#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(int l,int r,string& str2)
{
    if(l>=r) return ;

    swap(str2[l],str2[r]);
    checkPalindrome(l+1,r-1,str2);
}

void checkPalindrome2(int l,int n,string& str2)
{
    if(l>=n/2) return;

    swap(str2[l], str2[n-l-1]);
    checkPalindrome2(l+1,n,str2);
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>> str;

    string str2=str;
    int n=str.length();
    //checkPalindrome(0,n-1,str2);
    checkPalindrome2(0,n,str2);

    if(str2==str)
    {
        cout<<"Given number is palindrome.";
    }
    else
    {
        cout<<"Given number is not a palindrome.";
    }

    return 0;
}