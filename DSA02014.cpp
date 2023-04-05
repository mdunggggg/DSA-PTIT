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
map<string,bool>mp;
vector<vector<int>>vis;
vector<string>ans;
int k , m , n;
vector<vector<string>>mx;
void Try(int i , int j , string s){
    if(mp[s]){
         ans.push_back(s);    
    }
    for(int k = 0 ; k < 8 ; ++k){
        int x = i + path[k].first;
        int y = j + path[k].second;
        if(x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]){
            vis[x][y] = true;
            Try(x, y, s + mx[x][y]);
            vis[x][y] = false;
        }
    }
}
void Process(){
    cin >> k >> m >> n;
    mp.clear();
    ans.clear();
    for(int i = 0 ; i < k ; ++i){
        string s; cin >> s;
        mp[s] = true;
    }
    mx.assign(n , vector<string>(m));
    vis.assign(n , vector<int>(m , 0));
   
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> mx[i][j];
        }
    }
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            vis[i][j] = true;
            Try(i, j, mx[i][j]);
            vis[i][j] = false;
        }
    }
    
    for(auto it : ans)
        cout << it << ' ';
    if(ans.size() == 0)
        cout << -1;
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    