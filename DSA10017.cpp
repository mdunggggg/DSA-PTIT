/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;
int f[MAX][MAX], vis[MAX], n , m , ok;
vector<int>adj[MAX];
bool bfs(int u){
    vis[u] = 1;
    queue<pair<int,int>>q;
    q.push({u, 0});
    while(!q.empty()){
        pair<int,int> top = q.front();
        q.pop();
        for(int v : adj[top.first]){
            if(!vis[v]){
                vis[v] = 1;
                q.push({v, top.second + f[top.first][v]});
            }
            else if(u == v && top.second + f[top.first][v] < 0) return true;
        }
    }
    return false;
}
void Process(){
    memset(vis, 0, sizeof(vis));
    cin >> n >> m;
    for(int i = 1 ; i < MAX ; ++i){
        adj[i].clear();
    }
    for(int i = 0 ; i < m ; ++i){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        f[u][v] = w;
    }
    for(int i = 1 ; i <= n ; ++i){
        memset(vis, 0, sizeof(vis));
        if(bfs(i)){
            cout << "1\n";
            return;
        }
    }
    cout << "0\n";
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    