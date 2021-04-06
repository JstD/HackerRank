#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=0;i<n;i++){
        //line 
        for(int j =0;j<n-i-1;j++)
            cout<<' ';
        for(int j=n-i-1;j<n;j++)
            cout<<'#';
        cout<<endl;
    }
}