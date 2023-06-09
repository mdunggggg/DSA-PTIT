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
    int ans = 0;
    int last = 0;
    int n = s.size();
    st.push(-1);
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '(')
            st.push(i);
        else{
            st.pop();
            if(!st.empty()) ans = max(i - st.top(), ans);
            else st.push(i);
        }
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    