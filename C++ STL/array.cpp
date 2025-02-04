#include<bits/stdc++.h>
using namespace std;

array<int, 3>a;//->{0,0,0} when we dont declare array globally it contains all values 0

//max size of 10^7 ->int,double,char
int Arr[10000000];
//max size of 10^8 ->bool
bool Arr[100000000];

int main()
{
    //max size of 10^6 ->int,double,char
    int Arr[10000000];
    //max size of 10^7 ->bool
    bool Arr[100000000];


    //declare ->int arr[5];

    array<int, 3>arr;// -> {?,?,?} when we donot declare array locally then it contains garbage values
    
    array<int, 5>arr={1,2,3}; // -> {1,2,3,0,0} it contains other 2 values as 0.
    
    array<int, 5>arr={0}; //-> {0,0,0,0,0} if we want to make all values of any arrays as 0 then we declare first index vlaue as 0

    
    array<int, 5>arr;
    arr.fill(10); // -> {10,10,10,10,10}

    arr.at(2); // ->arr.at(index)

    //for print the array
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
    }

    //iterators
    // x.......y
    //begin() -> point to the first element.Here, x
    //rbegin() -> its like reverse begin,that means end.So it points to the last element.Here, y
    //end() -> point after the last element.Here, y+1
    //rend() -> reverse end.So it point before the first element.Here, x-1

    array<int, 5>arr={1,2,3,4,5};

    for(auto i=arr.begin(); i!=arr.end(); i++)
    {
        cout<<*i<<" ";
    }

    for(auto i=arr.rbegin(); i!=arr.rend(); i++) //in second part we can also write i>arr.rend()
    {
        cout<<*i<<" ";
    }

    for(auto i=arr.end()-1; i>=arr.begin(); i--)
    {
        cout<<*i<<" ";
    }

    //for each loop
    for(auto i:arr)
    {
        cout<<i<<" "; // 1 2 3 4 5
    }
    
    
    string str="Rimon";

    for(auto c:str)
    {
        cout<<c<<" "; //R i m o n
    }

    //size
    cout<<arr.size();

    //first element
    cout<<arr.front(); // arr.at(0)

    //last element
    cout<<arr.back(); // arr.at(arr.size()-1)

}