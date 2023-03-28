/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int calc(char c){
    if(c == '(') return 0;
    else if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    return 3;
}
void Process(){
    string s; cin >> s;
    string res = "";
    stack<char>st;
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(isalpha(s[i])){
            res += s[i];
        }
        else if(s[i] == '(') 
            st.push(s[i]);
        else{
            if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty()&& (calc(st.top()) >= calc(s[i]))){
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}

