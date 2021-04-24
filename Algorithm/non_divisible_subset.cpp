#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */

int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> aux(k);
    int max_point = 0;
    for(int i =0;i<s.size();i++){
        aux[s[i]%k]++;
    }
    int count =0;
    for(int i=1;i<(k+1)/2;i++){
        if(aux[i]>=aux[k-i])
            count += aux[i];
        else{
            count+=aux[k-i];
        }
    }
    if(aux[0]>0)
        count +=1;
    if(k/2*2==k && aux[k/2]>0)
        count++;
    return count;
}
int main(){
    cout<<nonDivisibleSubset(4,{19,10,12,10,24,25,22});
}
