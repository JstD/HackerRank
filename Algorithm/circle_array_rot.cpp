#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int first =0;

    first = a.size()-k%a.size();
    vector<int>result;
    for(int i=0;i<queries.size();i++){
        result.push_back(a[(queries[i]+first)%a.size()]);
    }
    return result;
}