#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i=0;i<d;i++){
        int temp = arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }
    return arr;
}
int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> temp = rotateLeft(1,arr);
    for(int i=0;i<4;i++){
        cout<<temp[i];
    }
}
