/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m , vis[1005];
vector<int>adj[1005];
bool dfs(int u , int par){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            if(dfs(v, u))
                return true;
        }
        else if (v != par)
            return true; 
    }
    return false;
}
bool bfs(int u){
    queue<pair<int, int>>q;
    q.push({u , -1});
    vis[u] = 1;
    while(!q.empty()){
        int u = q.front().first;
        int par = q.front().second;
        q.pop();
        for(int v : adj[u]){
            if(!vis[v]){
                q.push({v, u});
                vis[v] = 1;
            }
            else if(v != par) 
                return true;
        }
    }
    return false;
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
    for(int i = 1 ; i <= n ; ++i){
        if(!vis[i]){
            if(bfs(i)){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    