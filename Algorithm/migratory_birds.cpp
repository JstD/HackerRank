#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    vector<int>temp(6);
    for(int i=0;i<arr.size();i++){
        temp[arr[i]]++;
    }
    int max =0;
    int idx =0;
    for(int i=0;i<temp.size();i++){
        if(temp[i]>max){
            max = temp[i];
            idx = i;
        }
    }
    return idx;
}
