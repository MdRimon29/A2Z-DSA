#include<bits/stdc++.h>
using namespace std;
int main()
{
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

    //st->{1,2,5}
    //erase functionality
    //log(n) is the complexity
    st.erase(st.begin()); //-> st.erase(iterator) // st -> {2,5}

    //log(n)
    st.erase(st.begin(), next(st.begin(),2)); // [)
    //st.erase(firstIterator, lastIterator)

    st.erase(5); //st.erase(key) ->delete 5 from st

    set<int>st={1,2,5,7};
    auto it=st.find(5); // log(n) -->it will be iterator to 5
    auto it=st.find(9); // it=st.end();
}