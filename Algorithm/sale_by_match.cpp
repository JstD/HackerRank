#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    //Buble sort
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i;j++){
            if(ar[j]>ar[j+1]){
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]==ar[i+1]){
            count+=1;
            i++;
        }
    }
    return count;
}