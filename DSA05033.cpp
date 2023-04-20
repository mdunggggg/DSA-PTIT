/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int n = s.size();
    s = " " + s;
    int f[n + 5][n + 5] = {};
    for(int i = 1 ; i <= n ; ++i){
        f[i][i] = 1;
    }
    for(int i = 2 ; i <= n ; ++i){
        for(int j = 1 ; j <= n - i + 1 ; ++j){
            int k = j + i - 1;
            if(i == 2){
                if(s[j] == s[k]){
                    f[j][k] = 2;
                }
                else    
                    f[j][k] = max(f[j + 1][k], f[j][k - 1]);
            }
            else if (s[j] == s[k]){
                f[j][k] = f[j + 1][k - 1] + 2;
            }
            else 
                f[j][k] = max(f[j + 1][k], f[j][k - 1]);   
        }
    }
    cout << n - f[1][n] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    