#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(vector<int> c) {
    int step = 0;
    int pos =0;
    while(pos<=c.size()-2) {
        pos +=2;
        if(pos<c.size()){
            if(c[pos]==1)
                pos--;
        }
        else{
            pos--;
        }
        step++;
    }
    return step;
}
