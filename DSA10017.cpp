/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
// Tim duong di ngan nhat co chu trinh khong am
long long d[MAX];
int n , m , s;
struct edge{
    long long x, y , w;
};
vector<edge>dscanh;
vector<int>adj[MAX];
bool bellManFord( int s){
    for ( int i = 1 ; i <= n ; i++){
        d[i] = 1e9;
    }
    d[s] = 0;
    for ( int i = 1 ; i <= n - 1 ; ++i){
        for ( auto it : dscanh){
            int u = it.x, v = it.y, w = it.w;
            if ( d[v] > d[u] + w){
                d[v] = d[u] + w;
            }
        }
    }
    for ( auto it : dscanh){
        int u = it.x, v = it.y, w = it.w;
        if (  d[v] > d[u] + w){
            return true;
        }
    }
    return false;
}
void Process(){
    cin >> n >> m  ;
    memset(d, 0, sizeof(d));
    dscanh.clear();
    for ( int i= 0 ; i < m ; ++i){
        long long x , y , w; cin >> x >> y >> w;
        dscanh.push_back({x, y, w});
    }
    if(bellManFord(1)) cout << "1\n";
    else cout << "0\n";
}

int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}