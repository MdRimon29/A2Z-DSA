#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Key Value 
    // store key value in a order
    // map only stores unique keys 
	// log n is the tc of map 
	
    // raj -> 27 
	// hima -> 31 
	// sandeep -> 67 
	// tank -> 89 

	map<string, int> mpp; 
	mpp["raj"] = 27; 
	mpp["hima"] = 31; 
	mpp["praveer"] = 31;
	mpp["sandeep"] = 67; 
	mpp["tank"] = 89; 
	mpp["raj"] = 29; //it overwrite 27,now the value of raj is 29.Beacuse it only stores unique keys
	
    mpp.emplace("raj", 45); //slightly faster 
	
    mpp.erase("raj"); // mpp.erase(key) 
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.clear(); // entire map is cleaned up
	mpp.erase(mpp.begin(), std::next(mpp.begin(), 2)); // cleans up a given range
	
    auto it = mpp.find("raj"); // points to where raj lies 
    cout<<it->first<<endl; //print key 
    cout<<it->second<<endl; // print value
	
    auto it = mpp.find("simran"); // points to end since she does not exists 
 
	if(mpp.empty()) 
    {
		cout << "Yes it is empty"; 
	}
	mpp.count("raj"); // always returns 1 as it stores only 1 

    pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10;

    // printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}
 
	for(auto it = mpp.begin(); it!=mpp.end();it++) //here it is a iterator so we need to use -> sign,not dot(.)
    {
		cout << it->first << " " << it->second << endl; 
	}

    // does not stores in any order 
	unordered_map<int,int> mpp; 
	// unordered_map<pair<int,int>,int> mpp; xxxxxx
	// o(1) in almost all cases
	// o(n) in the worst case, where n is the container size 

    // Pair class 
	pair<int,int> pr = {1,2}; 
	pair< pair<int,int>, int> pr2 = {{1,2}, 2}; 
	cout << pr2.first.second << endl;
	pair<pair<int,int>, pair<int,int>> pr3 = {{1,2},{2, 4}};
	cout << pr3.first.first; //-> 1 
	cout << pr3.second.second; //-> 4 
 
	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 
 
 
    //sorted and can store multiple keys
	multimap<string, int> mpp;
	mpp.emplace("raj", 2); 
	mpp.emplace("raj", 5);
}