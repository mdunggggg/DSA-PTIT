/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

struct fiBo{
    long long f[2][2];
    friend istream& operator >> (istream &in, fiBo &x){
        for(int i = 0 ; i < 2 ; ++i){
            for(int j = 0 ; j < 2 ; ++j){
                if(i == 1 && j == 1) x.f[i][j] = 0;
                else x.f[i][j] = 1;
            }
        }
        return in;
    }
    friend ostream& operator << (ostream &out , fiBo x){
        for(int i = 0 ; i < 2 ; ++i){
            for(int j = 0 ; j < 2 ; ++j){
                out << x.f[i][j] << ' ';
            }
            out << '\n';
        }
        return out;
    }
    friend fiBo operator * (fiBo a , fiBo b){
        fiBo res;
        for(int i = 0 ; i < 2 ; ++i){
            for(int j = 0 ; j < 2 ; ++j){
               res.f[i][j] = 0;
                for(int k = 0 ; k < 2 ; ++k){
                    res.f[i][j] += ((a.f[i][k]  % MOD)* (b.f[k][j] % MOD)) % MOD;;
                    res.f[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};


fiBo calc(fiBo a , long long n){
    if(n == 1) return a;
    fiBo cur = calc(a , n / 2);
    if(n & 1) return cur * cur * a;
    return cur * cur;
}
void Process(){
    long long n ; cin >> n;
    fiBo a;
    cin >> a;
    fiBo res = calc(a, n);
    cout << res.f[0][1] << '\n';  
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    