/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long f[105][50005];
void Ready(){
    for(int i = 1 ; i <= 9 ; ++i){
        f[1][i] = 1;
    }
    for(int i = 2 ; i <= 100 ; ++i){
        for(int j = 5000; j >= 0; --j){
            for(int k = 0; k <= 9 ; ++k){
                if(j - k >= 0)
                    f[i][j] += f[i - 1][j - k];
                    f[i][j] %= MOD;
            }
        }
    }
}
void Process(){
    int n, k;
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
    