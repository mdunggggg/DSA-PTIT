/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool calc(string s, string t){
    int idx = 0;
    int n = t.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[idx] == t[i])
            idx++;
    }
    return idx == s.size();
}
void Process(){
    long long n;
    cin >> n;
    long long cur = pow(n , 1.0 / 3);
    for(int i = cur ; i >= 1 ; --i){
        long long x = 1ll * i * i * i;
        if(calc(to_string(x), to_string(n))){
            cout << x << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    