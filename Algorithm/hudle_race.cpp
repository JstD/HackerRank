#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {
    int max = 0;
    for(int i =0;i<height.size();i++)
        if(max < height[i])
            max = height[i];
    return max>k?max-k:0;
}