/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    stack<int>st;
    for(char c : s){
        if(isdigit(c)){
            st.push(c - '0');
        }
        else{
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            if(c == '+') st.push(x + y);
            else if(c == '-') st.push(y - x);
            else if(c == '*') st.push(x * y);
            else if(c == '/') st.push(y / x);
        }
    }
    cout << st.top() << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    