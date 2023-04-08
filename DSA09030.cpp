/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m;
int color[1005];
vector<int>adj[1005];
bool dfs(int u, int par){
    color[u] = 3 - color[par];
    for(int v : adj[u]){
        if(color[v] == 0){
            if(!dfs(v , u))
                return false;
        }
        else if(color[v] == color[u])
            return false;
    }
    return true;
}
void Process(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        adj[i].clear();
    memset(color , 0 , sizeof(color));
    for(int i = 1 ; i <= m ; ++i){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    color[0] = 1;
    for(int i = 1 ; i <= n ; ++i){
        if(color[i] == 0){
            color[i] = 2;
            if(!dfs(i , 0)){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    