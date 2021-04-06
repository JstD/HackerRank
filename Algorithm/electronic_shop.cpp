#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    int maxcost = -1;
    for(int i=0;i<keyboards.size();i++){
        for(int j=0;j<drives.size();j++){
            if(keyboards[i]+drives[j]<=b)
                if(keyboards[i]+drives[j]>maxcost)
                    maxcost = keyboards[i]+drives[j];
        }
    }
    return maxcost;

}