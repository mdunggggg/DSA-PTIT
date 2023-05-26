/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int n = s.size();
    stack<string>st;
    for(int i = 0 ; i < n ; ++i){
        if(isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string x = st.top();
            st.pop();
            string y = st.top();
            st.pop();
            string cur = "(" + y + s[i] + x + ")";
            st.push(cur);
        }
    }
    s = st.top();
    cout << s << '\n';
   
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    