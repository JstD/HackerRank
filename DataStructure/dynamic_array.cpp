#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */



vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> lastAns ;
    int lastAnswer = 0;
    vector<vector<int>> arr(n);
    for (int i=0;i<queries.size();i++){
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];
        int idx = (x^lastAnswer)%n;
        if (type==1){
            
            arr[idx].push_back(y);
        }
        else if(type==2){
            lastAnswer = arr[idx][y%(arr[idx].size())];
            lastAns.push_back(lastAnswer);
        }
    }
    return lastAns;
    
}