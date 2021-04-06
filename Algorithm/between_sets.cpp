#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    vector<int>temp;
    for(int num=a[a.size()-1];num<=b[0];num++){
        bool flag = true;
        for(int i=0;i<a.size();i++){
            if(num%a[i]!= 0){
                flag = false;
                break;
            }
        }
        if(flag){
            temp.push_back(num);
        }
    }
    int count =0;
    for(int i =0;i<temp.size();i++){
        bool flag = true;
        for(int j=0;j<b.size();j++){
            if(b[j]%temp[i]!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
        }
    }
    return count;
}