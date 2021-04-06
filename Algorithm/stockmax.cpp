#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'stockmax' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY prices as parameter.
 */

long stockmax(vector<int> prices,int pos =0) {
    if(pos>=prices.size()-1)
        return 0;
    int maxpos =0;
    int maxval =0;
    for(int i=pos;i<prices.size();i++){
        if(prices[i]>=maxval){
            maxval = prices[i];
            maxpos = i;
        }
    }
    long profit = 0;
    for(int i=pos;i<maxpos;i++){
        profit -= prices[i];
    }
    profit += (maxpos-pos)*long(prices[maxpos]);
    if(profit>0)
        return profit + stockmax(prices,maxpos+1) ;
    else{
        return stockmax(prices,maxpos+1);
    }
}
int main(){
    vector<int>prices = {1,100,1,10};
    cout<<stockmax(prices);
}