/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int v, e, u , vis[1005];
vector<int>adj[1005];
void bfs(int start){
    cout << start << ' ';
    vis[start] = 1;
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int x : adj[u]){
            if(!vis[x]){
                cout << x << ' ';
                vis[x] = 1;
                q.push(x);
            }
        }
    }
}
void Process(){
    memset(vis , 0 , sizeof(vis));
    for(auto &x : adj)
        x.clear();
    cin >> v >> e >> u;
    for(int i = 1 ; i <= e ; ++i){
        int x , y;
        cin >> x >> y;
        adj[x].emplace_back(y);
    }
    for(int i = 1 ; i <= v ; ++i){
        sort(adj[i].begin(), adj[i].end());
    }
    bfs(u);
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    