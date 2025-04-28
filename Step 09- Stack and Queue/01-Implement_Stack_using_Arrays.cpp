#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    int t=-1,stck[10];
    
    //tc=O(1)
    //sc=O(n) -->n is the fixed size here,what we define at first
    void push(int x) {
        if (t>=10) cout<<"Exceeded size"<<endl;
        t +=1;
        stck[t]=x;
    }
    
    //tc=O(1)
    //sc=O(n) -->n is the fixed size here,what we define at first
    int pop() {
        if(t<0) return -1;
        int x=stck[t];
        t--;
        return x;
    }
    
    //tc=O(1)
    //sc=O(n) -->n is the fixed size here,what we define at first
    int top() {
        return stck[t];
    }
    
    //tc=O(1)
    //sc=O(n) -->n is the fixed size here,what we define at first
    int size() {
        return t+1;
    }
};

int main()
{
    MyStack s;
    s.push(5);
    s.push(2);
    s.push(9);
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Pop: "<<s.pop()<<endl;
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
}