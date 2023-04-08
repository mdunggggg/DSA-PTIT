/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, m , q;
    cin >> n >> m;
    vector<vector<int>>f(n + 1, vector<int>(n + 1, 1e9));
    for(int i = 1 ; i <= n ; ++i){
        f[i][i] = 0;
    }
    for(int i = 0 ; i < m ; ++i){
        int u, v, w; cin >> u >> v >> w;
        f[u][v] = f[v][u] = w;
    }
    for(int k = 1 ; k <= n ; ++k){
        for(int i = 1 ; i <= n ; ++i){
            for(int j = 1 ; j <= n ; ++j){
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
            }
        }
    }
    cin >> q;
    while(q--){
        int u , v;
        cin >> u >> v;
        cout << f[u][v] << '\n';
    }

}
int main(){
    Faster();
        Process();
}
    