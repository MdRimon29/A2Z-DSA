#include<bits/stdc++.h>
using namespace std;
int main()
{
    //almost all opration in set data structures time complexity is log(n)
    //given n element,tell me the number of unique element 
    int arr [5]={2,5,2,1,5}; // -> { 1 2 5}

    set<int>st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; 
        cin>>x;
        st.insert(x); //log(n) is the complexity
    }

    cout<<st.size();

    //st->{1,2,5}
    //erase functionality
    //log(n) is the complexity
    st.erase(st.begin()); //-> st.erase(iterator) // st -> {2,5}

    //log(n)
    //set does not support random access(direct indexing),so we cannot use + with iterators like vec.begin() + 3
    //so we need to use next() for erase first three element
    st.erase(st.begin(), next(st.begin(),2)); // [)
    //st.erase(firstIterator, lastIterator)

    st.erase(5); //st.erase(key) ->delete 5 from st

    set<int>st={1,2,5,7};
    auto it=st.find(5); // log(n) -->it will be iterator to 5
    auto it=st.find(9); // it=st.end();
    st.emplace(6); // st.insert(6);

    cout<<st.size()<<endl;

    //set doesnot insert a value which was already in it
    set<int>st;
    st.insert(5); //->{5}
    st.insert(5); // ->{5}

    //for printing set
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }

    for(auto it:st)
    {
        cout<<it<<endl;
    }

    st.erase(st.begin(),st.end());


    //Unorder set
    //unorder set can elements in any order,we dont know that
    unordered_set<int>st;

    st.insert(2);
    st.insert(5);
    st.insert(1);

    //average time complexity is O(1)
    //tle -> switch to set
    //worst case is linear in nature,O(n)


    //Multiset
    //multiset helps us to store all the elements in sorted fashion
    //complexity is log n
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);// ms.emplace(5)
    // ms -> {1,1,2,3,5}

    ms.erase(2); // all the instances will be erased

    auto it=ms.find(2); // return the iterator pointing the first element of 2
    ms.clear(); //delete the entire set
    ms.erase(ms.begin(),ms.end()); // delete the entire set

    //for printing multiset
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }

    for(auto it:st)
    {
        cout<<it<<endl;
    }

    //finds how many times 2 occurs
    st.count(2);

    ms.erase(ms.find(2)); 
	ms.erase(ms.find(2), next(ms.find(2) , 1));


}