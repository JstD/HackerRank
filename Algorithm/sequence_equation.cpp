#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the permutationEquation function below.
vector<int> permutationEquation(vector<int> p) {
    vector<int>result;
    for(int i =0;i<p.size();i++){
        for(int j =0;j<p.size();j++){
            if(p[j]==i+1){
                for(int k =0;k<p.size();k++){
                    if(p[k]==j+1){
                        result.push_back(k+1);
                        break;
                    }
                }
                break;
            }
        }
    }
    return result;
}