#include<bits/stdc++.h>
using namespace std;

namespace rimon{
    int val=2;
}

//If we want to create a new datatype then we need to use struct where it is our customize datatype.
//we can store int,float,double,char,string or any types of data in it.
struct node
{
    int num;
    double doub;
    char ch;
    string str;

    node(int num_,double doub_,char ch_,string str_){
        num=num_;
        doub=doub_;
        ch=ch_;
        str=str_;
    }
};


int main()
{
    double val=10.5;
    cout<<val<<endl;//val=10.5
    cout<<rimon::val<<endl;//val=2

    //wrong of defining struct
    /*node data1;
    data1.num=10;
    data1.doub=29.12;
    data1.ch='R';
    cout<<data1.num<<endl;*/

    //right way of defining struct
    node* data2=new node(10,29.12,'R',"Data2");
    cout<<data2->num<<endl;
    cout<<data2->doub<<endl;
    cout<<data2->ch<<endl;

    //another way of defining
    node data2= node(10,29.12,'R',"Data2");

    //another way of defining 
    node data3(15,29.123,'M',"Data3");
    cout<<data3.num<<" "<<data3.doub<<" "<<data3.ch<<" "<<data3.str<<endl;

    return 0;
}