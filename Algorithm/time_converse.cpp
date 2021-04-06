#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    int hours = stoi(s.substr(0,2));
    string session = s.substr(8,2);
    if(session =="AM"){
        if(hours==12){
            hours =0;
        }
    }
    else if(session =="PM"){
        if(hours<12){
            hours += 12;
        }
    }
    if(hours<10){
        s[0]='0';
        s[1]=to_string(hours)[0];
    }
    else{
        s[0]=to_string(hours)[0];
        s[1]=to_string(hours)[1];
    }
    return s.substr(0,8);
}