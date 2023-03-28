/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int disc[1005], timer, low[1005], AP[1005];
vector<int>adj[1005];
int n , m;
vector<pair<int,int>>bridge;
void dfs(int u, int par){
    disc[u] = low[u] = ++timer;
    int count = 0;
    for(int v : adj[u]){
        if(v == par){
            continue;
        }
        if(!disc[v]){
            ++count;
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if(low[v] > disc[u]){
                if(u > v)
                    bridge.push_back({v, u});
                else 
                    bridge.push_back({u , v});
            }   
        }
        else{
            low[u] = min(low[u], disc[v]);
        }
    }
}
void Process(){
    cin >> n >> m;
    memset(disc, 0 , sizeof(disc));
    memset(low, 0, sizeof(low));
    memset(AP, 0, sizeof(AP));
    timer = 0;
    bridge.clear();
    for(auto &x : adj)
        x.clear();
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; ++i){
        if(disc[i] == 0){
            dfs(i, -1);
        }
    }
    sort(bridge.begin(), bridge.end(),[](pair<int,int>a , pair<int, int> b){
        if(a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    });
    for(auto [i, j] : bridge){
        cout << i << ' ' << j << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}