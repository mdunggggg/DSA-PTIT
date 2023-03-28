/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ;
    cin >> n >> m;
    vector<vector<int>>adj(n + 1 , vector<int>());
    for(int i = 0 ; i < m ; ++i){
        int x , y;
        cin >> x >> y;
        adj[x].emplace_back(y);
        adj[y].emplace_back(x);
    }
    for(int i = 1 ; i <= n ; ++i){
        cout << i << ": ";
        for(int x : adj[i]){
            cout << x << ' ';
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
    