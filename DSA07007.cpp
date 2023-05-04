/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string convert(string s){
    stack<int>st;
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            if(st.top() != 0 and s[st.top() - 1] == '-'){
                for(int j = st.top() ; j < i ; ++j){
                    if(s[j] == '+')
                        s[j] = '-';
                    else if(s[j] == '-') 
                        s[j] = '+';
                }
            }
            st.pop();
        }
    }
    string ans = "";
    for(int i = 0 ; i < n ; ++i){
        if(s[i] != '(' and s[i] != ')'){
            ans += s[i];
        }
    }
    return ans;
}
void Process(){
    string s, t; cin >> s >> t;
    if(convert(s) == convert(t)){
        cout << "YES\n";
    }
    else cout << "NO\n";    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    