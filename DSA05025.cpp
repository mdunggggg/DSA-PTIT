/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    long long f[n + 5] = {};
    f[0] = f[1] = 1;
    f[2] = 2;
    for(int i = 3 ; i <= n ; ++i){
        f[i] = f[i - 2] + f[i - 3] + f[i - 1];
    }
    cout << f[n] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    