/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int f[n + 5][m + 5] = {};
    for(int i = 0 ; i <= n ; ++i){
        for(int j = 0 ; j <= m ; ++j){
            if(i == 0 || j == 0)
                f[i][j] = 0;
            else{
                if(s[i - 1] == t[j - 1]){
                    f[i][j] = f[i - 1][j - 1] + 1;
                }
                else 
                    f[i][j] = max(f[i - 1][j] , f[i][j - 1]);
            }
        }
    }
    cout << f[n][m] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    