/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m, a[1005][1005], vis[1005][1005];
int bfs(int u, int v){
    vis[u][v] = 1;
    queue<pair<pair<int,int>, int>>q;
    q.push({{u, v}, 0});
    while(!q.empty()){
        pair<pair<int,int>,int>top = q.front();
        q.pop();
        if(top.first.first == m && top.first.second == n){
            return top.second;
        }
        if(top.first.second + a[top.first.first][top.first.second] <= n && !vis[top.first.first][top.first.second + a[top.first.first][top.first.second]]){
            vis[top.first.first][top.first.second + a[top.first.first][top.first.second]] = 1;
            q.push({{top.first.first, top.first.second + a[top.first.first][top.first.second]}, top.second + 1});
        }
        if(top.first.first + a[top.first.first][top.first.second] <= m && !vis[top.first.first + a[top.first.first][top.first.second]][top.first.second]){
            vis[top.first.first + a[top.first.first][top.first.second]][top.first.second] = 1;
            q.push({{top.first.first + a[top.first.first][top.first.second], top.first.second}, top.second + 1});
        }
    }
    return -1;
}
void Process(){
    cin >> m >> n;
    memset(a, 0, sizeof(a));
    memset(vis, 0, sizeof(vis));
    for(int i = 1; i <= m ; ++i){
        for(int j = 1 ; j <= n; ++j){
            cin >> a[i][j];
        }
    }
    cout << bfs(1, 1) << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    