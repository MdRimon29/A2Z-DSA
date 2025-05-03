#include<bits/stdc++.h>
using namespace std;

class Q{
public:
    int size=10,q[10],currSize=0,start=-1,end=-1;

    void push(int x){
        if(size==currSize) cout<<"Current size is equal to given size"<<endl;
        if(currSize==0){
            start=0;
            end=0;
        }
        else{
            end =(end+1)%size;
        }
        q[end]=x;
        currSize +=1;
    }

    int pop(){
        if(currSize==0) return -1;
        int x=q[start];
        if(currSize==1) {
            start=end=-1;
        }
        else{
            start=(start+1)%size;
        }
        currSize -=1;
        return x;
    }

    int top(){
        if(currSize==0) return -1;
        return q[start];
    }

    int Size(){
        return currSize;
    }
};

int main()
{
    Q q;
    q.push(5);
    q.push(2);
    q.push(9);
    cout<<"Top: "<<q.top()<<endl;
    cout<<"Pop: "<<q.pop()<<endl;
    cout<<"Top: "<<q.top()<<endl;
    cout<<"Size: "<<q.Size()<<endl;
}