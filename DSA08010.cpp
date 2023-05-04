/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
int bfs(int n){
    map<int,int>mp;
    queue<int>q;
    q.push(n);
    mp[n] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u == 1){
            return mp[u];
        }
        for(int i = 2; i <= sqrt(u); ++i){
            if(u % i == 0){
                if(mp[u / i] == 0){
                    mp[u / i] = mp[u] + 1;
                    q.push(u / i);
                }
            }
        }
        if(mp[u - 1] == 0){
            mp[u - 1] = mp[u] + 1;
            q.push(u - 1);
        }
    }
}
void Process(){
    cin >> n;
    cout << bfs(n) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    