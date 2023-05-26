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
    stack<int>st;
    for(int i = n - 1 ; i >= 0 ; --i){
        if(isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else{
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            if(s[i] == '+') st.push(x + y);
            else if(s[i] == '-') st.push(x - y);
            else if(s[i] == '*') st.push(x * y);
            else st.push(x / y);
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
    