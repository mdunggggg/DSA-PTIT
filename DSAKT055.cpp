/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , v;
    cin >> n >> v;
    int a[n + 5], c[n + 5];
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    for(int i = 1 ; i <= n ; ++i){
        cin >> c[i];
    }
    int f[v + 5] = {};
    for(int i = 1 ; i <= n ; ++i){
        for(int j = v; j >= a[i] ; --j){
            f[j] = max(f[j], f[j - a[i]] + c[i]);
        }
    }
    cout << f[v] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    