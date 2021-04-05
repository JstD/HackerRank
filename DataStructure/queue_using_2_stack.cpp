#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class queue{
    private:
    stack<int>s1;
    stack<int>s2;
    public:
    void enqueue(int value){
        this->s1.push(value);
    }
    int dequeue(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int result = s2.top();
        s2.pop();
        return result;
    }
    int front(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int result = s2.top();
        return result;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    queue lst;
    int q ;
    cin>>q;
    for (int i=0;i<q;i++){
        int first;
        cin>>first;
        if(first==1){
            //insert 
            int temp;
            cin>>temp;
            lst.enqueue(temp);
        }
        else if(first==2){
            //dequeue
            lst.dequeue();
        }
        else if(first==3){
            cout<<lst.front()<<endl;
        }
    }
    return 0;
}
