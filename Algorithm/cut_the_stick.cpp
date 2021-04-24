#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
    vector<int> result;
    bool flag = true;
    while(flag){
        int count =0;
        int min = INT_MAX;
        flag = false;
        for(int i =0;i<arr.size();i++){
            if (arr[i]<min&&arr[i]>0){
                min = arr[i];
            }
        }
        
        cout<<endl;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                count+=1;
                flag = true;
            }
            arr[i] -=min;
        }
        if(count>0)
            result.push_back(count);
    }
    return result;
}
