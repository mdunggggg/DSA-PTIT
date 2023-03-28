/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int cost[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void Process(){
    int n; cin >> n;
    int ans = 0;
    for (int i = 9; i >= 0; --i) {
        ans += n / cost[i];
        n %= cost[i];
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    