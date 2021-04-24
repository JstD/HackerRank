#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='a')
            count++;
    count *= n/int(s.length());
    for(int i=0;i<n%int(s.length());i++)
        if(s[i]=='a')
            count++;
    return count;
}