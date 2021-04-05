



/*
This solution is not completed
Please optimize it soon!!
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>arr;
    int q;
    cin>>q;
    for(int i =0;i<q;i++){
        int first;
        cin>>first;
        int v;
        if(first==1){
            cin>>v;
            arr.push_back(v);
            sort(arr);
        }
        else if(first==2){
            cin>>v;
            int pos = binarySearch(arr,0,arr.size()-1,v);
            if(pos>-1){
                erase(arr,pos);
            }
        }
        else if(first==3){
            cout<<arr[0]<<endl;
        }
                
    }
    return 0;
}
