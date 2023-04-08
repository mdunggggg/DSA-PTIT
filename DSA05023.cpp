/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    long long ans = 0;
    int n = s.size();
    long long f[n] = {}; 
    f[-1] = 0;
    for(int i = 0 ; i < n ; ++i){
        int x = s[i] - '0';
        f[i] = f[i - 1] * 10 + (i + 1) * x;
        ans += f[i];
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    