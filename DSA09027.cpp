/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int res , cur, vis[1005];
vector<int>adj[1005];
int n , m, f[1005];
int x;
void dfs(int u){
    vis[u] = 1;
    f[u] = x;
    for(int v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
void Process(){
    cin >> n >> m;
    memset(vis, 0, sizeof(vis));
    for(auto &x : adj)
        x.clear();
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cur = res = 0;
    for(int i = 1 ; i <= n ; ++i){
        if(!vis[i]){
            ++x;
            dfs(i);
        }
    }
    int q; cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        if(f[x] == f[y]) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    