#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m , s , t, par[2005], vis[2005], ok;
vector<int>adj[2005];
void dfs(int u){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            par[v] = u;
            dfs(v);
        }
    }
}
void Process(){
    cin >> n >> m >> s >> t;
    for(int i = 1 ; i <= 2000 ; ++i){
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y;
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    for(int i = 1 ; i <= n ; ++i){
        sort(adj[i].begin(), adj[i].end());
    }
   
    dfs(s);
    if (!vis[t]) {
        cout << "-1";
        return;    
    }
    else{
        vector<int>res;
        while( s != t){
            res.push_back(t);
            t = par[t];
        }
        res.push_back(s);
        reverse(res.begin(),res.end());
        for ( int x : res) cout << x << ' ';
    }
    cout << '\n';
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    