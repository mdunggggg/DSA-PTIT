/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, vis[1005];
vector<int>v, adj[1005];
vector<vector<int>>ans;
void Try(int u){
    int flag = 0;
    for(int x : adj[u]){
        if(!vis[x]){
            flag = 1;
            vis[x] = 1;
            v.push_back(x);
            Try(x);
            v.pop_back();
        }
    }
    if(!flag){
        ans.push_back(v);
    }

}
void ReInit(){
    memset(vis, 0, sizeof(vis));
    for(auto &it : adj){
        it.clear();
    }
    ans.clear();
    v.clear();
}   
void Process(){
    ReInit();    
    cin >> n;
    for(int i = 0 ; i < n - 1 ; ++i){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    v.push_back(1);
    vis[1] = 1;
    Try(1);
    sort(ans.begin(), ans.end(), [](vector<int>a, vector<int>b){
        return a.back() < b.back();
    });
    for(auto it : ans){
        for(auto i : it){
            cout << i << ' ';
        }
        cout << '\n';
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    