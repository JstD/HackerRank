#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    int idx =0;
    int e =100;
    do{
        idx =(idx+k)%c.size();
        if(c[idx]==1)
            e -=2;
        e -=1;
    }while(idx);
    return e;
}