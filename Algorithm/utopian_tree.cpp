#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {
    int height=1;
    for(int i=1;i<=n;i++)
        if(i%2==1)
            height*=2;
        else
            height++;
    return height;
}