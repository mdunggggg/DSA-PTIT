/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
pair<int,int>path[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
vector<vector<int>>vs, a;
int ans, n , m;
struct point{
    int x, y, w;
};
 struct cmp{
    bool operator()(point a , point b){
        return a.w > b.w;
    }
};
    
void Process(){
    cin >> n >> m;
    a.assign(n , vector<int>(m, 0));
    vs.assign(n , vector<int>(m , 0));
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    priority_queue<point, vector<point>, cmp>pq;
    pq.push({0, 0, a[0][0]});
    while(!pq.empty()){
        point top = pq.top();
        pq.pop();
        if(top.x == n - 1 and top.y == m - 1){
            cout << top.w << '\n';
            return;
        }
        for(int i = 0 ; i < 4 ; ++i){
            int x = top.x + path[i].first;
            int y = top.y + path[i].second;
            if(x >= 0 and x < n and y >= 0 and y < m and !vs[x][y]){
                vs[x][y] = 1;
                pq.push({x, y, top.w + a[x][y]});
            }
        }
    }

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    