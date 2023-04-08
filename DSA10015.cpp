/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int par[1005], sz[1005];
int n , m;
struct edge{
    int u, v, w;
};
int find(int u){
    if(u == par[u]) return u;
    return u = find(par[u]);
}
bool onion(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]){
        par[u] = v;
        sz[v] += sz[u];
    }
    else{
        par[v] = u;
        sz[u] += sz[v];
    }
    return true;
}
void Process(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i){
        par[i] = i;
        sz[i] = 1;
    }
    vector<edge>v(m);
    for(int i = 0 ; i < m ; ++i){
        cin >> v[i].u >> v[i].v >> v[i].w;
    }
    sort(v.begin(), v.end(), [](edge a, edge b){
        return a.w < b.w;
    });
    int res = 0, count = 0;
    for(int i = 0 ; i < m ; ++i){
        if(count == n - 1) break;
        if(onion(v[i].u, v[i].v)){
            res += v[i].w;
        }
    }
    cout << res << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    