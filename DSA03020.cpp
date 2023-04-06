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
    int ans = 0;
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '['){
            st.push('[');
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                int j = i;
                while(s[j] == ']'){
                    ++j;
                }
                swap(s[i], s[j]);
                ans += j - i;
                st.push('[');
            }
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
    