#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'equalizeArray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int equalizeArray(vector<int> arr) {
    vector<int>temp(100);
    int pos =0;
    int max =0;
    for(int i = 0; i <arr.size();i++){
        temp[arr[i]]++;
        if(temp[arr[i]]>max){
            max = temp[arr[i]];
            pos = arr[i];
        }
    }
    int count = 0;
    for(int i = 0; i < arr.size();i++){
        if(arr[i]!=pos){
            count ++;
        }
    }
    return count;
}
