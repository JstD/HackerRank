#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {
    vector<int> temp;
    for (int i=0;i<word.length();i++){
        temp.push_back(h[int(word[i])-97]);
    }
    int max=0;
    for(int i=0;i<temp.size();i++)
        if(max<temp[i])
            max = temp[i];
    return max*word.length();
}