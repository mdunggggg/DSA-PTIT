/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<vector<int>>adj;
int vis[MAX];
int n;
int bfs(){
    vis[1] = 1;
    int res = -1;
    queue<pair<int,int>>q;
    q.push({1, 0});
    while(!q.empty()){
        pair<int,int>top = q.front();
        q.pop();
        int u = top.first, dis = top.second;
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = 1;
                q.push({v, dis + 1});
                res = max(res, dis + 1);
            }
        }
    }
    return res;
}
void Process(){
    cin >> n;
    memset(vis, 0, sizeof(vis));
    adj.assign(n + 1, vector<int>());
    for(int i = 0 ; i < n - 1 ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
    }
    cout << bfs() << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    