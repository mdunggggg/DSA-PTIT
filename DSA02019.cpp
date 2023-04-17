/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m, res, vis[25][25];
vector<int>adj[25];
void Try(int u, int count){
    res = max(res, count);
    for(int v : adj[u]){
        if(!vis[u][v]){
            vis[u][v] = vis[v][u] = 1;
            Try(v, count + 1);
            vis[u][v] = vis[v][u] = 0;
        }
       
    }
}
void Process(){
    cin >> n >> m;
    res = 0;
    for(int i = 0; i < 25 ; ++i){
        adj[i].clear();
    }
    memset(vis, 0, sizeof(vis));
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    for(int i = 0 ; i < n ; ++i){
        Try(i, 0);
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    