/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<int>adj[MAX];
vector<long long>f;
int n;
long long dfs(int u){
    long long cur = adj[u].size();
    for(int v : adj[u]){
        cur += dfs(v);
        f[u] += f[v];        
    }
    f[u] += cur;
    return cur;
}
void Process(){
    cin >> n;
    f.resize(n + 1, 1);
    for(int i = 2 ; i <= n ; ++i){
        int x; cin >> x;
        adj[x].emplace_back(i);
    }
    dfs(1);
    for(int i = 1 ; i <= n ; ++i){
        cout << f[i] << ' ';
    }
}
int main(){
    Faster();
        Process();
}
    