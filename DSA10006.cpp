/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int par[1005], sz[1005];
int n, m , s;
int find(int u){
    if(u == par[u]) return u;
    return u = find(par[u]);
}
bool find(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v)
        return false;
    if(sz[u] > sz[v]){
        sz[u] += sz[v];
        par[v] = u;
    }
    else{
        sz[v] += sz[u];
        par[u] = v;
    }
    return true;
}

void Process(){
    cin >> n >> m >> s;
    int a[n + 5][n + 5] = {};
    for(int i = 0 ; i < m ; ++i){
        int x, y;;
        a[x][y] = a[y][x] = 1;
    }  
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    