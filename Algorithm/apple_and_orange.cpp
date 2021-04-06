#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int count_ap=0,count_or=0;
    for(int i =0;i<apples.size();i++){
        apples[i]+=a;
        if(apples[i]>=s&&apples[i]<=t)
            count_ap++;
    }
    for(int i =0;i<oranges.size();i++){
        oranges[i]+=b;
        if(oranges[i]>=s&&oranges[i]<=t)
            count_or++;
    }
    cout<<count_ap<<endl<<count_or;
}