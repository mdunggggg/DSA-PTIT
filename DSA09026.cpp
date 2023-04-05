/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;
int par[MAX];
int vis[MAX];
int n , m, u , v;
vector<int> adj[MAX];
void bfs(int u , int v){
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int i : adj[x]){
            if(!vis[i]){
                vis[i] = 1;
                par[i] = x;
                q.push(i);
            }
        }
    }
    if(!vis[v]){
        cout << -1 << '\n';
        return;
    }
    vector<int> ans;
    while(v != u){
        ans.push_back(v);
        v = par[v];
    }
    ans.push_back(u);
    reverse(ans.begin() , ans.end());
    for(int i = 0 ; i < ans.size() ; ++i)
        cout << ans[i] << ' ';
    cout << '\n';
}
void Process(){
    cin >> n >> m >> u >> v;
    for(int i = 1 ; i < MAX ; ++i){
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
    }
    for(int i = 0 ; i < m ; ++i){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
       
    }
    bfs(u , v);
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    