#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the squares function below.
int squares(int a, int b) {
    int x = sqrt(a);
    if(x*x<a)   x +=1;
    int y = sqrt(b);
    int res = y-x+1;
    return res>0?res:0;
}
