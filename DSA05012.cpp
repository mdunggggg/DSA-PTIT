/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long f[1005][1005];
void Ready(){
    for(int i = 0 ; i <= 1000 ; ++i){
        for(int j = 0 ; j <= i; ++j){
            if(i == 0 || j == 0)
                f[i][j] = 1;
            else 
                f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
            f[i][j] %= MOD;
        }
    }
}
void Process(){
    int n , k ;
    cin >> n >> k;
    cout << f[n][k] << '\n';
}
int main(){
    Faster();
    Ready();
    int t; cin >> t;
    while(t--)
        Process();
}
    