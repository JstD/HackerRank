#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if(y1>y2)
        return 10000;
    if(y1<y2)
        return 0;
    if(m1>m2)
        return (m1-m2)*500;
    if(m1<m2)
        return 0;
    if(d1>d2)
        return (d1-d2)*15;
    return 0;
}