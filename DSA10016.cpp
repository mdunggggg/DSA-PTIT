/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct edge{
    int u, v;
    double w;
};
int n;
vector<edge>v;
double distance(pair<int,int>x, pair<int, int>y){
    double cur = (x.first - y.first) * (x.first - y.first) + (x.second - y.second) * (x.second - y.second);
    return sqrt(cur);
}
int sz[150], par[150];
int find(int u){
    if(u == par[u])
        return u;
    return u = find(par[u]);
}
bool onion(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v) return false;
    if(sz[u] > sz[v]){
        sz[u] += sz[v];
        par[v] = u;
    }
    else{
        sz[v] += sz[u];
        par[u] = v;
    }
    return true;
}
void Process(){
    cin >> n;
    for(int i = 0 ; i < 150 ; ++i){
        par[i] = i;
        sz[i] = 1;
    }
    v.clear();
    vector<pair<double,double>>point;
    for(int i = 0 ; i < n ; ++i){
        double x, y;
        cin >> x >> y;
        point.push_back({x, y});
    }
    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){
            edge cur = {i + 1, j + 1, distance(point[i], point[j])};
            v.push_back(cur);
        }
    }
   
    int count = 0;
    double ans = 0;
    sort(v.begin(), v.end(), [](edge a , edge b){
        return a.w < b.w;
    });
    for(int i = 0 ; i < v.size(); ++i){
        if(count == n - 1){
            break;
        }
        int u = v[i].u, k = v[i].v;
        double dis = v[i].w;
        if(onion(u , k)){
            ++count;
            ans += dis;
        }
    }
    cout << fixed << setprecision(6) << ans << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    