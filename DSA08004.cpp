/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int k; cin >> k;
    string s; cin >> s;
    int dd[26] = {};
    for(char c : s){
        ++dd[c - 'A'];
    }
    priority_queue<int>pq;
    for(int i = 0 ; i < 26 ; ++i){
        pq.push(dd[i]);
    }
    long long ans = 0;
    while(k--){
        int x = pq.top();
        pq.pop();
        pq.push(max(0, x - 1));
    }
    while(!pq.empty()){
        ans += 1ll * pq.top() * pq.top();
        pq.pop();
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    