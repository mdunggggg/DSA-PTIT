/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int k , n , m;
vector<int>adj[1005];
vector<int>pos;
int vis[1005];
int num[1005];
void dfs(int u){
    vis[u] = 1;
    ++num[u];
    for(int v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
void Process(){
    cin >> k >> n >> m;
    for(int i = 0 ; i < 1005 ; ++i){
        adj[i].clear();
        num[i] = 0;
    }
    pos.clear();
    for(int i = 0 ; i < k ; ++i){
        int x; cin >> x;
        pos.push_back(x);
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
    }
    for(int i : pos){
        memset(vis, 0, sizeof(vis));
        dfs(i);
    }
    int ans = 0;
    for(int i = 1 ; i <= n ; ++i){
        ans += (num[i] == k);
    }
    cout << ans << '\n';
}
int main(){
    Faster();
        Process();
}
    