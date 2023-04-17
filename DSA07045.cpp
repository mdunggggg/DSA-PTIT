/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    stack<char>s1, s2;
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[i] != '-' && s[i] != '<' && s[i] != '>'){
            s1.push(s[i]);
        }
        else if(s[i] == '-'){
            if(!s1.empty()){
                 s1.pop();
            }      
        }
        else if(s[i] == '<'){
            if(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
           
        }
        else{
            if(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }   
        }
    }
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    while(!s2.empty()){
        cout << s2.top();
        s2.pop();
    }
}
int main(){
    Faster();
        Process();
}
    