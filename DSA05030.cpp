/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ;
    cin >> n >> m;
    long long f[n + 1][m + 1] = {};
    for(int i = m ; i >= 0 ; --i){
        for(int j = n ; j >= 0 ; --j){
            if(i == m || j == n)
                f[j][i] = 1;
            else
                f[j][i] = f[j + 1][i] + f[j][i + 1];
        }
    }
    cout << f[0][0] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    