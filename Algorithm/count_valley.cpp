#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    int count;
    int height=0;
    for(int i=0; i<steps; i++){
        if(path[i]=='U'){
            height++;
            if(height==0)
                count++;
        }
        else
            height--;
    }
    return count;
}