/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m , u;
vector<pair<int,int>>adj[1005];
void dijkstra(int u){
    vector<int>dis(n + 1, 2e9);
    dis[u] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.push({0 , u});
    while(!pq.empty()){
        pair<int,int>top = pq.top();
        pq.pop();
        if(top.first > dis[top.second])
            continue;
        for(auto it : adj[top.second]){
            if(dis[it.first] > dis[top.second] + it.second){
                dis[it.first] = dis[top.second] + it.second;
                pq.push({dis[it.first] , it.first});
            }
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        cout << dis[i] << ' ';
    }
}
void Process(){
   cin >> n >> m >> u;
   for(int i = 1 ; i <= 1000 ; ++i){
         adj[i].clear();
   }
   for(int i = 0 ; i < m ; ++i){
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y , w});
        adj[y].push_back({x , w});
   }
   dijkstra(u);
   cout << '\n';
}

int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    