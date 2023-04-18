/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m, start;
int vis[1005];
vector<int>adj[1005];
vector<pair<int,int>>ans;
void bfs(int u){
    vis[u] = 1;
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int v : adj[top]){
            if(!vis[v]){
                vis[v] = 1;
                ans.push_back({top , v});
                q.push(v);  
            }
         }
    }
    
}
void Process(){
    cin >> n >> m >> start;
    ans.clear();
    for(int i = 0; i < 1005 ; ++i){
        vis[i] = 0;
        adj[i].clear();
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(start);
    if(ans.size() != n - 1){
        cout << "-1\n";
        return;
    }
    for(auto it : ans){
        cout << it.first << ' ' << it.second << '\n';
    }

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    