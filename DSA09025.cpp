/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int vis[2005], par[2005];
vector<int>adj[2005];
int v, e, s , t, ok;
void find(int u , int v){
    vector<int>ans;
    while(v != u){
        ans.push_back(v);
        v = par[v];
    }
    ans.push_back(u);
    reverse(ans.begin(), ans.end());
    for(int x : ans){
        cout << x << ' ';
    }
    cout << '\n';
}
void dfs(int u){
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
    }
  
    dfs(s);
    if(!vis[t]){
        cout << "-1\n";
        return;
    }
    find(s, t);
   
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    