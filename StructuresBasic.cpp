#include<bits/stdc++.h>
using namespace std;

typedef struct convert//structures is like an array but it contains different datatype variables together
{                     //using typedef and just call cv instead of convert  
    /* data */
    int favNum;
    float maxRating;
    char favChar;
    string favCar;
}cv;


int main()
{
    cv rimon;
    cv sojeb;
    cv hasib;

    rimon.favNum=10;
    rimon.maxRating=8.5;
    rimon.favChar='R';
    rimon.favCar="Rolls Royce";

    hasib.favNum=9;
    hasib.maxRating=8.7;
    hasib.favChar='H';
    hasib.favCar="Mercedes";

    sojeb.favNum=11;
    sojeb.maxRating=8.9;
    sojeb.favChar='S';
    sojeb.favCar="Bugatti";

    cout<<rimon.favNum<<"  "<<rimon.maxRating<<"  "<<rimon.favChar<<"  "<<rimon.favCar<<endl;
    cout<<hasib.favNum<<"  "<<hasib.maxRating<<"  "<<hasib.favChar<<"  "<<hasib.favCar<<endl;
    cout<<sojeb.favNum<<"  "<<sojeb.maxRating<<"  "<<sojeb.favChar<<"  "<<sojeb.favCar<<endl;

    return 0;
}