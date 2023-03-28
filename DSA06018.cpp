/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    map<int,int>dd;
    int M = 0 , m = 1e9;
    for(int i = 0 ; i < n ; ++i){
        int x; cin >> x;
        dd[x] = 1;
        M = max(M , x);
        m = min(m , x);
    }
    int cnt = 0;
    for(int i = m ; i <= M ; ++i){
        if(!dd[i]) ++cnt;
    }
    cout << cnt << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    