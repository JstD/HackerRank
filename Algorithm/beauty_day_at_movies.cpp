#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the beautifulDays function below.
int reverse(int n){
    int temp=0;
    while(n>0){
        temp += n%10;
        n /=10;
        if(n>0)
            temp*=10;
    }
    return temp;
}
int beautifulDays(int i, int j, int k) {
    int count =0;
    for(int x=i;x<=j;x++){
        if((x-reverse(x))%k==0)
            count+=1;
    }
    return count;
}
int main()
{
    cout<<beautifulDays(20,23,6);
}