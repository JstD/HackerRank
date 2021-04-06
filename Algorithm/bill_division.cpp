#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    int sum =0;
    for(int i =0;i<bill.size();i++){
        if (i==k) 
            continue;
        sum += bill[i];
    }
    int actual = sum/2;
    if(b-actual<=0)
        cout<<"Bon Appetit";
    else
        cout<<int(b-actual);

}