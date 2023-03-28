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
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else{
            if(!st.empty()&& st.top() == '('){
                st.pop();
            }   
            else st.push(s[i]);
        }
    }
    int k = 0;
    n = st.size();
    while(!st.empty() && st.top() == '('){
        ++k;
        st.pop();
    }
    cout << (n / 2 + k % 2) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    