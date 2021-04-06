#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    int plus=0;
    int minus = 0;
    for(int i;i<arr.size();i++){
        if(arr[i]<0)
            minus ++;
        else if(arr[i]>0)
            plus++;
    }
    float n = arr.size();
    cout<<setprecision(5)<<plus/n<<endl;
    cout<<setprecision(5)<<minus/n<<endl;
    cout<<setprecision(5)<<-(plus+minus-n)/n<<endl;
}