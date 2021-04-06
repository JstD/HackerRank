#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    if(n%2==0)
        n+=1;
    int count1 = p/2;
    int count2 = (n-p)/2;
    return count1<count2?count1:count2;

}