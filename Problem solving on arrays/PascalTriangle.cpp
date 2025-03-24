// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

#include<bits/stdc++.h>
using namespace std;

// tc=O(c)
// sc=O(1)
long long findNcR(int r,int c)
{
    int fact=1;
    for(int i=0; i<c; i++)
    {
        fact = fact * (r-i);
        fact = fact / (i+1);
    }
    return fact;
}

int main()
{
    int r=5,c=2;

    long long result=findNcR(r,c);
    cout<<"Result is: "<<result<<endl;
}