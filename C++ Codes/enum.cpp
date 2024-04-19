#include <bits/stdc++.h>
#include <iostream>
using namespace std;
main(){
     // enums are useful because they give index to thier objects
    enum weekdays{Mon,Tue,wed,thurs,fri,sat,sun};
    weekdays days = sun;
    int day;
    cin>>day;
    if(day==6){
        cout<<"its sunday";

    }

    //

    enum love{yes,no};
    love forHer = yes;
    if(forHer==0){
        cout<<"love is true";
    }else{
        cout<<"love is false";
    }
    enum colors {red, green, pink};
    colors favorite = red;
    cout<<favorite;
}