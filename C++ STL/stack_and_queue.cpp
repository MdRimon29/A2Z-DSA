#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Stack and Queue 
	stack<int> st; // lifo ds 
	// pop 
	// top 
	// size 
	// empty 
	// push and emplace 
 
	st.push(2); 
	st.push(4); 
	st.push(3); 
	st.push(1); 
 
 
	cout << st.top(); // prints 2 
	st.pop(); // deletes the last entered element 
	cout << st.top(); // prints 3 
	st.pop(); 
	cout << st.top(); 
 
	bool flag = st.empty(); // returns true if stack is empty, or false
 
	// deleted the entire stack 
	while(!st.empty()) {
		st.pop(); 
	}
 
	cout << st.size() << endl; // number of elements in the stack 
 
	stack<int> st; 
	if(!st.empty()) {
		cout << st.top() << endl; // throw error 
	}

    // queue // fifo operation ds 
	// push 
	// front
	// pop 
	// size 
	// empty 
 
	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 
 
	cout << q.front(); // prints 1 
	q.pop(); 
	cout << q.front(); // prints 5 
 
	// linear time 
	while(!q.empty()) {
		q.pop(); 
	}
	queue<int> q;
	for(int i = 0;i<10;i++) q.push(i); 


}