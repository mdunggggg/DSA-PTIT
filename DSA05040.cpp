/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    vector<int>f(n, 1), g(n, 1);
    for(int i = 2; i < n ; ++i){
        for(int j = 1 ; j < i ; ++j){
            if(a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
        }
    }
    for(int i = n - 2; i >= 0 ; --i){
        for(int j = n - 1 ; j > i ; --j){
            if(a[i] > a[j])
                g[i] = max(g[i], g[j] + 1);
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; ++i){
        ans = max(ans, f[i] + g[i] - 1);
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    