/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
pair<int,int> path[8] = {{-2 , -1},{-2 , 1},{-1 , -2},{-1 , 2},
                    {1, -2},{1, 2},{2 , -1},{2 , 1}};
int convert(char c){
    if(isdigit(c)) 
        return c - '0';
    return c - 'a' + 1;
}
int u, v, s, t;
int vis[10][10];
int bfs(){
    vis[u][v] = 1;
    queue<pair<pair<int,int>, int>>pq;
    pq.push({{u, v}, 0});
    while(!pq.empty()){
        pair<pair<int,int>,int>top = pq.front();
        if(top.first.first == s && top.first.second == t){
            return top.second;
        }
        pq.pop();
        for(int i = 0; i < 8; ++i){
            int x = top.first.first + path[i].first;
            int y = top.first.second + path[i].second;
            if(x >= 1 && y >= 1 && x <= 8 && y <= 8 && !vis[x][y]){
                vis[x][y] = 1;
                pq.push({{x, y}, top.second + 1});
            }
        }
    }
    return -1;
}
void Process(){
    string k; getline(cin >> ws, k);
    memset(vis, 0, sizeof(vis));
    u = convert(k[0]);
    v = convert(k[1]);
    s = convert(k[3]);
    t = convert(k[4]);
    cout << bfs() << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    