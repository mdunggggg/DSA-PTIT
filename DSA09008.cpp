/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int v, e, res , vis[1005];
vector<vector<int>>adj(1005, vector<int>());
void dfs(int u){
    vis[u] = 1;
    for(int x : adj[u]){
        if(!vis[x]){
            dfs(x);
        }
    }
}
void Process(){
    cin >> v >> e;
    res = 0;
    memset(vis, 0, sizeof(vis));
    adj.assign(v + 1, vector<int>());
    for(int i = 1 ; i <= e ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    for(int i = 1; i <= v ; ++i){
        if(!vis[i]){
            ++res;
            dfs(i);
        }
    }
    cout << res << '\n'; 
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    