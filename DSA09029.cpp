/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m ; 
vector<int>vs;
vector<vector<int>>adj;
bool ok;
void dfs(int u, int count){
    if(count == n){
        ok = true;
        return;
    }
    if(ok) return;
    vs[u] = true;
    for(int v : adj[u]){
        if(!vs[v]){
            vs[v] = true;
            dfs(v, count + 1);
            vs[v] = false;
        }
    }
}
void Process(){
    cin >> n >> m;
    adj.assign(n + 100, {});
    ok = false;
    for(int i = 0; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    for(int i = 1 ; i <= n ; ++i){
        vs.assign(n + 100, false);
        dfs(i, 1);
        if(ok){
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
    