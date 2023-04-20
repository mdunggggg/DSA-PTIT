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
char c[505][505];
int vis[505][505];
int n, m;
struct data{
    int x, y, w;
    char direction;
};
struct cmp{
    bool operator()(struct data a , struct data b){
        return a.w > b.w;
    }
};
pair<int, int>S, T;
void Process(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0; j < m ; ++j){
            cin >> c[i][j];
            if(c[i][j] == 'S'){
                S = make_pair(i, j);
            } 
            if(c[i][j] == 'T'){
                T = make_pair(i, j);
            }
        }
    }
    priority_queue<struct data, vector<struct data>, cmp>pq;
    pq.push({S.first, S.second, 0, '.'});
    vis[S.first][S.second] = 1;
    struct data top;
    while(!pq.empty()){
        top = pq.top();
        pq.pop();
      
    
    }
     
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    