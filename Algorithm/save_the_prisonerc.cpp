#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {
    int result = (m-(n-s+1))%n;
    return result>0?result:n+result;
}