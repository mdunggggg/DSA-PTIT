/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 123456789;
const int MAX = 1e6 + 5;
long long PowMod( long long a, long long b, long long mod){
    if (b == 1) return a;
    if (b == 0) return 1;
    long long x = PowMod(a , b / 2 , mod) % mod;
    if(b & 1) return ((x * x) % mod * a)% mod;
    return (x * x) % mod;
}
void Process(){
    long long n; cin >> n;
    cout << PowMod(2 , n - 1, 123456789) << '\n';   
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    