/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long PowMod( long long a, long long b, long long mod){
    long long res = 1;
    while(b){
        if(b & 1){
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return res;
}
void Process(){
    int n , k ; cin >> n >> k;
    cout << PowMod(n , k , MOD) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    