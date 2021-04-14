#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a) {
    for(int i = 0; i <a.size(); i++) {
        if(a[i]<=0)
            k-=1;
    }
    return k<=0?"NO":"YES";
}