#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int temp = n;
    int count = 0;
    while(temp!=0){
        int digit = temp%10;
        temp /= 10;
        if(digit !=0){
            if(n%digit==0)
                count +=1;
        }
    }
    return count;
}