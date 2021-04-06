#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    for(int i=0; i < grades.size();i++){
        if(grades[i]>=38){
            int buff = 5 - grades[i]%5;
            if (buff<3)
                grades[i] +=buff;
        }
    }
    return grades;
}
