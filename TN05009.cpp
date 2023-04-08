/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m , vis[1005], par[1005];
int last;
vector<int>adj[1005];
bool dfs(int u){
    vis[u] = 1;
    for(int v : adj[u]){
        if(!vis[v]){
            par[v] = u;
            if(dfs(v))
                return true;
        }
        else if(v != par[u] && v == 1){
            last = u;
            return true;
        }
    }
    return false;
}
void Process(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i){
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
    }

    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n ; ++i){
        sort(adj[i].begin(), adj[i].end());
    }
    if(dfs(1)){
        vector<int>ans;
        ans.push_back(1);
        while(last != 1){
            ans.push_back(last);
            last = par[last];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        for(int i : ans){
            cout << i << ' ';
        }
        cout << '\n';
    }
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    