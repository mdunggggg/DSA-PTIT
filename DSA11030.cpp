/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, q;
int vis[1005];
vector<int>adj[1005];
int bfs(int u, int v){
    if(u == v) return 0;
    queue<pair<int,int>>q;
    q.push({u, 0});
    vis[u] = 1;
    while(!q.empty()){
        pair<int,int>top = q.front();
        q.pop();
        int x = top.first;
        int dis = top.second;
        if(x == v){
            return dis;
        }
        for(int t : adj[x]){
            if(!vis[t]){
                vis[t] = 1;
                q.push({t, dis + 1});
            }
        }
    }
    return 0;
}
void Process(){
    for(auto &it : adj){
        it.clear();
    }
    cin >> n;
    for(int i = 0; i < n - 1; ++i){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    cin >> q;
    while(q--){
        memset(vis, 0, sizeof(vis));
        int u, v; cin >> u >> v;
        cout << bfs(u, v) << '\n';
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    