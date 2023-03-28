/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m , degree[1005];
vector<int>adj[1005];
void Kahm(){
    queue<int>q;
    int cnt = 0;
    for(int i = 1 ; i <= n ; ++i){
        if(degree[i] == 0){
            q.push(i);
            ++cnt;
        }
    }
    
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            --degree[v];
            if(degree[v] == 0){
                ++cnt;
                q.push(v);
            }
        }
    }
    if(cnt == n) cout << "NO\n";
    else cout << "YES\n";
}
void Process(){
    cin >> n >> m;
    memset(degree, 0, sizeof(degree));
    for(auto &x : adj){
        x.clear();
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        ++degree[y];
    }
    Kahm();
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    