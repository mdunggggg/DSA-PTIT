/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    stack<char>st;
    for(int i = 0 ; i < s.size(); ++i){
        if( s[i] == '[' || s[i] == '(' || s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && (st.top() + 1 == s[i] || st.top() + 2 == s[i])) st.pop();
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    if(!st.empty()) cout << "NO\n";
    else cout << "YES\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    