#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    int max =0;
    int countMax=0;
    for(int i =0;i<candles.size();i++){
        if(candles[i]>max){
            max=candles[i];
            countMax = 1;
        }
        else if(candles[i]==max)
            countMax +=1;
    }
    return countMax;
}
