/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[505][505], vis[505][505];
int n, m, res;
pair<int,int>path[8] = {{-1, -1} , {-1, 0}, {-1, 1},
                             {0, -1} , {0, 1},
                        {1, -1}, {1, 0}, {1, 1} 
                        };
void Try(int u , int v){
    vis[u][v] = 1;
    for(int i = 0 ; i < 8 ; ++i){
        int x = path[i].first + u;
        int y = path[i].second + v;
        if(x >= 1 && x <= n && y >= 1 && y <= m && !vis[x][y] && a[x][y]){
            Try(x , y);
        }
    }
}
void Process(){
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    memset(vis, 0, sizeof(vis));
    res = 0;
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= m ; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= m ; ++j){
            if(!vis[i][j] && a[i][j]){
                ++res;
                Try(i, j);
            }
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
    

