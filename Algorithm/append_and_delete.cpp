#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    while(s.length()>t.length()){
        s.pop_back();
        k--;
    }
    int temp = s.length()+t.length();
    if(k>=temp){
        return "Yes";
    }
    while(k>-1){
        if(s.length()==0){
            k-= t.length();
            if(k>=0)
                {return "Yes";}
            else return "No";
        }
        
        else if(t.find(s)==0){
            k -= t.length() - s.length();
            if((k>=0&&k%2==0) || k >=int(s.length())+int(t.length()))
                {return "Yes";}
            else return "No";
        }
        else{
            s.pop_back();
            k--;
        }
    }
    {return "No";}
}
int main(){
    cout<<appendAndDelete("ashley","ash",2);
}