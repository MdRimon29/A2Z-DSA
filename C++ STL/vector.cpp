#include<bits/stdc++.h>
using namespace std;

int main()
{
    //segmentation fault if you push back 10^7 times.

    vector<int>vec; // ->{}
    cout<<vec.size()<<endl; // -> 0
    
    vec.push_back(0); // {0}
    vec.push_back(2); // {0,2}
    cout<<vec.size()<<endl; // ->2
    
    vec.pop_back(); // {0}
    cout<<vec.size()<<endl; // ->1

    vec.push_back(0); // {0,0}
    vec.push_back(2); // {0,0,2}
    vec.clear(); // {} ->erase all the elements at once

    vector<int> vec1(4,0); // ->{0,0,0,0}
    vector<int> vec2(4,10); // ->{10,10,10,10}

    //copy the entire vec2 in vec3
    vector<int> vec3(vec2.begin(), vec2.end()); //-> [) ->begin will in this vector,end will not be in the vector
    vector<int> vec3(vec2);

    vector<int> arr;  
    arr.push_back(1); // arr.emplace_back(1); ->emplace_back takes lesser time than push_back
    arr.push_back(2); 
    arr.push_back(3); 
    arr.push_back(4); 
    arr.push_back(5); // {1,2,3,4,5}

    vector<int> arr1(arr.begin(), arr.begin()+3 ); // -> {1,2,3} ->not include 4

    //lower bound,upper bound
    //swap ->swap(v1,v2)
    //begin(), end(), rbegin(), rend()

    //2D vector
    vector<vector<int>>vect;

    vector<int>vec1;
    vec1.push_back(1);
    vec1.push_back(2);

    vector<int>vec2;
    vec2.push_back(10);
    vec2.push_back(20);

    vector<int>vec3;
    vec1.push_back(11);
    vec1.push_back(21);
    vec1.push_back(23);

    vect.push_back(vec1);
    vect.push_back(vec2);
    vect.push_back(vec3);

    //for print 
    //it is vector itself
    for(auto it:vect)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<vect[2][2]<<endl; //->23

    //define 10 X 20 
    vector<vector<int>> v(10, vector<int>(20,0));
    v.push_back(vector<int>(20,0));
    cout<<v.size()<<endl; // 11

    v[2].push_back(1);

    //define 10 x 20 x 30 // int arr[10][20][30]
    vector<vector<vector<int>>>vec(10,vector<vector<int>>(20, vector<int>(30,0)));

}