#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int shared =5; 
    int like =shared/2;
    int cum = like;
    for(int i =2;i<=n;i++){
        shared = like *3;
        like = shared/2;
        cum += like;
    }
    return cum;
}
int main(){
    cout<<viralAdvertising(3);
}