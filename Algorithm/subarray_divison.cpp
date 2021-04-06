#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {
    int count=0;
    for(int i=0;i<=s.size()-m;i++){
        int sum = 0;
        for(int j=i;j<i+m;j++){
            sum += s[j];
        }
        if(sum == d) 
            count +=1;
    }
    return count;
}
int main(){
    cout<<birthday({4},4,1);
}