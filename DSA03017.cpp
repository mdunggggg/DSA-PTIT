/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int k; cin >> k;
    string s; getline(cin >> ws, s);
    int dd[26] = {};
    for(char c : s){
        ++dd[c - 'A'];
    }
    priority_queue<int>pq;
    for(int i = 0 ; i < 26 ; ++i){
        if(dd[i]) pq.push(dd[i]);
    }
    while(k--){
        int cur = pq.top();
        pq.pop();
        pq.push(max(cur - 1, 0));
    }
    int res = 0;
    while(!pq.empty()){
        int cur = pq.top();
        pq.pop();
        res += 1ll * cur * cur;
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    