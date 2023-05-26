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
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            int l = st.top();
            st.pop();
            if(l != 0 and s[l - 1] == '-'){
                for(int k = l ; k < i ; ++k){
                    if(s[k] == '+'){
                        s[k] = '-';
                        continue;
                    }
                    if(s[k] == '-'){
                        s[k] = '+';
                        continue;
                    }
                }
            }
           
        }
    }
    for(int i = 0 ; i < n ; ++i){
        if(s[i] != '(' and s[i] != ')'){
            cout << s[i];
        }
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    