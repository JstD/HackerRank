#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    vector<int> result(2);
    int max=scores[0],min=scores[0];
    for(int i = 0; i < scores.size();i++){
        if(scores[i]>max){
            max = scores[i];
            result[0] +=1;
        }
        else if(scores[i]<min){
            min = scores[i];
            result[1] +=1;
        }
    }
    return result;
}
