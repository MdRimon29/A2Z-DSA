#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Bitset 
	// int -> 16 bits 
	// char -> 8 bits
	int a[100]; 
	char a[100]; 
 
	// bitset -> 1 bit
 
	bitset<5> bt; // stores 1 or 0 
	cin >> bt; // 10111
 
	// all (return true if all values are set(1))
	// true // false
	cout << bt.all(); // returns a true or a false
 
	
    // any (return true if any value is set(1))
	// true 
	cout << bt.any(); // bt -> 10011
    // false
	cout << bt.any(); // bt -> 00000


    // none 
	// if none is set, then true, else false 
	// bt -> 10000
	cout << bt.none(); // false 
    // bt -> 00000
	cout << bt.none(); //true 
 
	
    // count (how many number bits are set(1))
	// for bt -> 10100
	// prints 2 
	cout << bt.count(); // print the number of set bits
 
	
    // flip (flip the value)
	// bt -> 10100
	bt.flip(2); // bt will become 10000
    bt.flip(); //all values flipped
 
 
	// set 
	bt.set(); // 11111 
 
	bt.set(2); // sets the 2nd index
 
	bt.set(2, 0); //set the 2nd index as 0
 
 
	// reset 
	bt.reset(); // turn all indexes to 0 
 
	bt.reset(2); // turn the 2nd index to 0 
 
	// size 
	cout << bt.size(); // prints 5 
 
	// test 
 
	cout << bt.test(1); // check if the bit is set or not at index  1
}