#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */
void sort(vector<int>&arr){
    for(int i =arr.size()-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
        else{
            break;
        }
    }
}
void erase(vector<int>&arr,int pos){
    for (int i=pos;i<arr.size()-1;i++){
        arr[i]= arr[i+1];
    }
    arr.pop_back();
}
int binarySearch(vector<int>&arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
vector<int> getMax(vector<string> operations) {
    stack<int>s;
    vector<int>arr;
    vector<int>result;
    for(int i =0;i<operations.size();i++){
        string temp = operations[i];
        if(temp[0]=='1'){
            temp.erase(0,2);
            int num = stoi(temp);
            s.push(num);
            arr.push_back(num);
            sort(arr);
        }
        else if(temp[0]=='2'){
            int num = s.top();
            s.pop();
            erase(arr,binarySearch(arr,0,arr.size()-1,num));
        }
        else if(temp[0]=='3'){
            result.push_back(arr[arr.size()-1]);
        }
    }
    return result;
}