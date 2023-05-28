/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long a[11], f[101] = {};
void Prepare(){
    for (int i = 1; i <= 10; i++)
        a[i] = 1;
    f[1] = 10;
    for (int i = 2; i <= 100; i++){
        for (int j = 1; j <= 9; j++){
            long long s = 0;
            for (int k = j; k <= 9; k++)
                s += a[k];
            a[j] = s;
            f[i] = (f[i] + s) % MOD;
        }
    }
    for (int i = 2; i <= 100; i++)
        f[i] = (f[i] + f[i - 1]) % MOD;
}
void Process(){
    int n; cin >> n;
    cout << f[n] << '\n';   
}
int main(){
    Faster();
    Prepare();
    int t; cin >> t;
    while(t--)
        Process();
}
    