/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m ;
vector<int>adj[1005];
int degree[1005];
int vis[1005];
bool check(){
    vis[1] = 1;
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = 1;
                q.push(v);
            }
            
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        if(!vis[i]) return false;
    }
    return true;
}
void Process(){
    cin >> n >> m;
    for(int i = 0 ; i < 1005 ; ++i){
        vis[i] = degree[i] = 0;
        adj[i].clear();
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
        ++degree[x];
        ++degree[y];
    }
    bool isConnected = check();
    int count = 0;
    for(int i = 1 ; i <= n ; ++i){
        if(degree[i] % 2 == 1){
            ++count;
        }
    }
    if(count == 0 && isConnected) cout << "2\n";
    else if(count == 2 && isConnected) cout << "1\n";
    else cout << "0" << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    