/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
     int n ; cin >> n;
     int k ; cin >> k;
     int f[n + 5];
     f[0] = f[1] = 1;
     for(int i = 2 ; i <= n ; ++i){
          f[i] = 2 * f[i - 1] % MOD;
          if(i - k - 1 >= 0){
               f[i] = f[i] - f[i - k - 1];
          }
          if(f[i] < 0) f[i] += MOD;
     }
     cout << f[n] << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    