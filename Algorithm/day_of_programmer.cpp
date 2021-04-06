#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
bool isLeapYear(int year){
    if(year<=1917&&year%4==0){
        return true;
    }
    if(year%400==0)
        return true;
    if((year%4==0&&year%100!=0))
        return true;
    return false;
}
string dayOfProgrammer(int year) {
    if(year==1918){
        return "26.09."+string(to_string(year));
    }
    if(isLeapYear(year))
        return "12.09."+string(to_string(year));
    return "13.09."+string(to_string(year));
}   