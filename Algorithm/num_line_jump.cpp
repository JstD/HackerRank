#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
    /*
        x1+kv1 = x2+kv2=>k(v1-v2)=x2-x1=>k=(x2-x1)/(v1-v2)
    */
    float k = float(x2-x1)/(v1-v2);
    if(k<0)
        return "NO";
    if(k == int(k))
        return "YES";
    return "NO";
}