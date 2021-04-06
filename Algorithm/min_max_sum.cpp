#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    int min= INT_MAX;
    int max = 0;
    long sum =0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min)
            min = arr[i];
        if(arr[i]>max)
            max = arr[i];
        sum += arr[i];
    }
    cout<<sum-max<<' '<<sum-min;
}