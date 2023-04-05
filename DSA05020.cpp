/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ; cin >> n >> m ;
    int a[n][m];
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j)
            cin >> a[i][j];
    long long f[n][m];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            f[i][j] = 0;
            if (i == 0 && j == 0) f[i][j] = a[i][j];
            else if(i == 0)  f[i][j] = f[i][j - 1] + a[i][j];
            else if (j == 0)  f[i][j] = f[i - 1][j] + a[i][j];
            else f[i][j] = min({f[i - 1][j] , f[i][j - 1], f[i - 1][j - 1]}) + a[i][j];
        }
    }
    cout << f[n - 1][m - 1] << '\n';
}

int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    