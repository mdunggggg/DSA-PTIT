/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m , k;
    cin >> n >> m >> k;
    string x, y, z;
    cin >> x >> y >> z;
    int dp[n + 1][m + 1][k + 1] = {};
    for(int i = 0 ; i <= n ; ++i){
        for(int j = 0 ; j <= m ; ++j){
            for(int l = 0 ; l <= k ; ++l){
                if(i == 0 || j == 0 || l == 0)
                    dp[i][j][l] = 0;
                else if(x[i - 1] == y[j - 1] && y[j - 1] == z[l - 1])
                    dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
                else
                    dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j - 1][l], dp[i][j][l - 1]));
            }
        }
    }
    cout << dp[n][m][k] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    