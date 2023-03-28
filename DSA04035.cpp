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
void Process(long long a , long long b){
    cout << PowMod(a , b ,MOD) << '\n';
}
int main(){
    Faster();
    long long a , b;
    while(true){
        cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;
        Process(a , b);
    }
}
    