/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    int f[n] = {} , g[n] = {};
    for(int i = 0 ; i < n ; ++i){
        f[i] = a[i];
        for(int j = 0 ; j < i ; ++j){
            if(a[i] > a[j]){
                f[i] = max(f[i], f[j] + a[i]);
            }
        }
    }
    for(int i = n - 1; i >= 0 ; --i){
        g[i] = a[i];
        for(int j = n - 1 ; j > i ; --j){
            if(a[i] > a[j]){
                g[i] = max(g[i], g[j] + a[i]);
            }
        }
    }
    int ans = -1;
    for(int i = 0 ; i < n ; ++i){
        ans = max(ans, f[i] + g[i] - a[i]);
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    