/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int vis[1005], par[1005];
vector<int>adj[1005];
int v, e, s , t;
void find(int u , int v){
    string path = "";
    while(u != v){
        path += to_string(v);
        v = par[v];
    }
    path += to_string(v);
    for(char c : path) cout << c << ' ';
    cout << '\n';
}
void dfs(int u){
    // if(u == t){
    //     find(s , t);
    //     return;
    // }
    cout << u << '\n';
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            vis[v] = 1;
            par[v] = u;
            dfs(v);
        }
    }
}
void Process(){
    memset(vis, 0, sizeof(vis));
    for(auto &x : adj){
        x.clear();
    }
    cin >> v >> e >> s >> t;
    for(int i = 0 ; i < e ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    for(int i = 1 ; i <= v ; ++i){
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(s);
    for(int i = 1 ; i <= v ; ++i)
    cout << i << ' ' <<  par[i] << '\n';
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    