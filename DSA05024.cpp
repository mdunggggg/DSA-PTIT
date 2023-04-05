/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fix(a) cout << fixed << setprecision(a);
const double PI = 2*acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , s , c[MAX];
void solve(){
     n , s ; cin >> n >> s;
    vector<int>a(n);
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    int dp[s + 1] = {};
    dp[0] = 1;
    for(int i = 1 ; i <= s ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            if(a[j] <= i){
                dp[i] += dp[i - a[j]];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[s] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

}
    