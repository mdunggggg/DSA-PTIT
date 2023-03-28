/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m, vis[1005];
vector<int>adj[1005], t_adj[1005];
stack<int>st;

void dfs(int u){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            dfs(v);       
        }
    }
    st.push(u);
}
void tdfs(int u){
    vis[u] = 1;
    for(int v : t_adj[u]){
        if(!vis[v]){
            tdfs(v);
        }
    }
}
void Process(){
    cin >> n >> m;
    memset(vis, 0, sizeof(vis));
    for(int i = 0 ; i < 1005; ++i){
        adj[i].clear();
        t_adj[i].clear();
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        t_adj[y].emplace_back(x);
    }
    int count = 0;
    while(!st.empty()) st.pop();
    for(int i = 1 ; i <= n ; ++i){
        if(!vis[i]) dfs(i);
    }
    memset(vis, 0, sizeof(vis));
    while(!st.empty()){
        int u = st.top(); st.pop();
        if(!vis[u]){
            ++count;
             tdfs(u);
        }
           
    }
    if(count == 1) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    

