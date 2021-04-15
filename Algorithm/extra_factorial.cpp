#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.

vector<int>sumre(vector<vector<int>> arr){
    vector<int>result(arr[arr.size()-1].size()+1);
    for(int i=0; i<arr.size();i++){
        while(arr[i].size()<arr[arr.size()-1].size())
            arr[i].push_back(0);
    }
    for(int j =0;j<arr[arr.size()-1].size();j++){
        int temp = 0;
        for(int i = 0;i<arr.size();i++){
            temp += arr[i][j];
        }
        temp += result[j];
        result[j] = temp%10;
        result[j+1]+=temp/10;
    }
    if (result[result.size()-1]==0)
        result.pop_back();
    return result;
}
vector<int> submul(vector<int>a,int b,int unit){
//a is reversed
    vector<int> result(a.size()+1+unit);
    for(int i=0;i<a.size();i++){
        int temp = b*a[i];
        result[unit+i] += temp%10;
        result[unit+i+1] += temp/10;
    }
    if(result[result.size()-1]==0)
        result.pop_back();
    return result;
}
vector<int> mul(vector<int>a,vector<int>b){
    vector<vector<int>> temp;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        temp.push_back(submul(a,b[i],i));
    }
    vector<int> sum = sumre(temp);
    reverse(sum.begin(),sum.end());
    return sum;
}
vector<int>convert(int n){
    vector<int> result;
    while(n>0){
        result.push_back(n%10);
        n/=10;
    }
    reverse(result.begin(),result.end());
    return result;
}
void extraLongFactorials(int n) {
    vector<int> result = convert(1);
    for(int i=1;i<=n;i++){
        result = mul(result,convert(i));
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
int main(){
    extraLongFactorials(25);
}