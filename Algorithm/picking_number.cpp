#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int pickingNumbers(vector<int> a) {
    int maxlength =0;
    for(int i=0; i<a.size(); i++){
        int count1 =0;
        int count2 =0;
        for(int j=i;j<a.size();j++){
            if(a[j]-a[i]<=1&&a[j]-a[i]>=0)
                count1++;
            if(a[j]-a[i]>=-1&&a[j]-a[i]<=0)
                count2++;
        }
        int count = count1>count2?count1:count2;
        if(count>maxlength)
            maxlength = count;
    }
    return maxlength;
}
int main(){
    cout<<pickingNumbers({1,2,2,3,1,2});
}