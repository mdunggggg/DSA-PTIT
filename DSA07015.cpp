/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int calc(char c){
    if(c == '(') return 0;
    if(c == '+' or c == '-') return 1;
    if(c == '*' or c == '/') return 2;
    return 3;
}
int solve(string s){
    stack<int>st;
    int n = s.size();
}
void Process(){
    string s; cin >> s;
    string ans = "";
    int n = s.size();
    stack<char>st;
    for(int i = 0 ; i < n ; ++i){
        if(isdigit(s[i])){
            ans += s[i];
            ans += " ";
        }
        else if(s[i] == '('){
            st.push('(');
        }
        else{
            if(s[i] == ')'){
                while(!st.empty() and st.top() != '('){
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() and calc(s[i]) <= calc(st.top())){
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << ans << '\n';
   // cout << solve(ans) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    