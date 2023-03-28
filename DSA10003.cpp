/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m;
vector<int>adj[1005];
int vis[1005];
bool dfs(int u, int par){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            if(dfs(v, u))
                return true;
        }
        else if(v != par)
            return true;
    }
    return false;
}
void Process(){
    cin >> n >> m ;
    for(int i = 1 ; i <= n ; ++i)
        adj[i].clear();
    for(int i = 1 ; i <= m ; ++i){
        int x, y;
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    memset(vis, 0, sizeof(vis));
    for(int i = 1 ; i <= n ; ++i){
        if(!vis[i]){
            if(dfs(i , -1)){
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
    