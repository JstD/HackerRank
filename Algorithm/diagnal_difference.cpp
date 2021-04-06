#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int dif= 0;
    int n = arr.size()-1;
    for(int i=0;i<=n;i++){
        dif += arr[i][i]-arr[i][n-i];
    }
        return dif<0?-dif:dif;
}