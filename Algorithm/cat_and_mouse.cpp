#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    int temp = abs(x-z)-abs(y-z);
    if(temp>0) 
        return "Cat B";
    if(temp<0) return "Cat A";
    return "Mouse C";
}
