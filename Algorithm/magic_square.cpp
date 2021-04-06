#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i=0;i<d;i++){
        int temp = arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }
    return arr;
}
int find_diff(vector<vector<int>> s,vector<int>p){
    int result = abs(s[1][1]-5);
    for(int i=0;i<3;i++){
        result +=abs(s[0][i]-p[i]);
        result += abs(s[2][2-i]-p[4+i]);
    }
    result+=abs(s[1][0]-p[7]);
    result+=abs(s[1][2]-p[3]);
    cout<<result<<endl;
    return result;
}
int formingMagicSquare(vector<vector<int>> s) {  
    int min = 100;
    vector<vector<int>>arr = {{8,3,4,9,2,7,6,1},{4,3,8,1,6,7,2,9}};
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            vector<int>temp = rotateLeft(2*j,arr[i]);
            int res = find_diff(s,temp);
            if(res<min)
                min = res;
        }
    }
    return min;
}
int main(){
    vector<vector<int>>s = {{4, 9, 2},{3, 5, 7},{8, 1, 5}};
    cout<<formingMagicSquare(s);
}