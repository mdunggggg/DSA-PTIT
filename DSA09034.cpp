/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
pair<int,int>path[8] = {{-1, -1} , {-1, 0}, {-1, 1},
                        {0, -1} , {0, 1},
                        {1, -1}, {1, 0}, {1, 1} };
char c[105][1005];
int n , m , ans;
void dfs(int u , int v){
    c[u][v] = '.';
    for(int k = 0 ; k < 8 ; ++k){
        int x = u + path[k].first;
        int y = v + path[k].second;
        if(x >= 0 && x < n && y >= 0 && y < m && c[x][y] == 'W'){
            dfs(x, y);
        }
    }
}

void Process(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> c[i][j];
        }
    }
    ans = 0;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            if(c[i][j] == 'W'){
                ++ans;
                dfs(i, j);
            }
        }
    }
    cout << ans << '\n';
}
int main(){
    Faster();
        Process();
}
    