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
    s = " " + s;
    int f[n + 1][n + 1] = {};
    int ans = 1;
    for(int i = 1 ; i <= n ; ++i){
        f[i][i] = 1;
    }
    for(int len = 2 ; len <= n ; ++len){
        for(int i = 1 ; i <= n - len + 1 ; ++i){
            int j = i + len - 1;
            if(len == 2 && s[i] == s[j]){
                f[i][j] = 1;
            }
            else{
                f[i][j] = (f[i + 1][j - 1] && s[i] == s[j]); 
            }
            if(f[i][j]){
                ans = max(ans, len);
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
    