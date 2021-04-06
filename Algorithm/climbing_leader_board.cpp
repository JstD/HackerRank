#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_resultsAY.
 * The function accepts following parameters:
 *  1. INTEGER_resultsAY ranked
 *  2. INTEGER_resultsAY player
 */

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    stack<int> ranking;
    vector<int>results;
    ranking.push(ranked[ranked.size()-1]);
    for(int i = ranked.size()-1; i >=0;i--){
        if(ranking.top()!=ranked[i])
            ranking.push(ranked[i]);
    }
    int count =1;
    while(!player.empty()&&!ranking.empty()){
        if(player[player.size()-1]>=ranking.top()){
            player.pop_back();
            results.push_back(count);
        }
        else {
            ranking.pop();
            count+=1;
        }
    }
    for(int i=0;i<player.size();i++)
        results.push_back(count);
    int start =0,end = results.size()-1;
    while (start < end)
    {
        int temp = results[start];
        results[start] = results[end];
        results[end] = temp;
        start++;
        end--;
    }
    return results;
}
int main(){
    vector<int>ranked = {100, 90, 90, 80, 75, 60};
    vector<int>player = {50, 65, 77, 90, 102};
    vector<int> temp = climbingLeaderboard(ranked,player);
    for(int i=0;i<temp.size();i++)
        cout<<temp[i]<<' ';
}