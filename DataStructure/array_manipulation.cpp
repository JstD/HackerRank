#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    long max =0;
    vector<long> arr(n+1);
    for(int i=0;i<queries.size();i++){
        int a = queries[i][0]-1;
        int b = queries[i][1];
        int k = queries[i][2];
        arr[a] +=k;
        arr[b] -=k;
    }
    long sum =0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        arr[i] = sum;
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
int main(){
    int n = 10;
    vector<vector<int>>queries = {{1,5,3},{4,8,7},{6,9,1}};
    cout<<arrayManipulation(n,queries);
}