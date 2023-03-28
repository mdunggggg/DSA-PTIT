/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;


void Process(){
    int n; cin >> n;
    priority_queue<long long, vector<long long> , greater<> > pq;
    for(int i = 0 ; i < n ; ++i){
        long long x; cin >> x;
        pq.push(x);
    }
    long long res = 0;
    while(pq.size() >= 2){
        long long x = pq.top(); pq.pop();
        long long y = pq.top(); pq.pop();
        res += x + y;
        res %= MOD;
        pq.push((x + y) % MOD);
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    