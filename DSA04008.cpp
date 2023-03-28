/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
struct Matrix{
    long long F[2][2];
    friend istream& operator >> (istream &in , Matrix &x){
        for(int i = 0 ; i < 2 ; ++i){
            for(int j = 0 ; j < 2; ++j){
                in >> x.F[i][j];
            }
        }
        return in;
    }
    friend ostream& operator << (ostream &out , Matrix x){
        for(int i = 0 ; i < 2 ; ++i){
            for(int j = 0 ; j < 2; ++j){
                out << x.F[i][j] << ' ';
            }
            out << '\n';
        }
        return out;
    }
    friend Matrix operator * (Matrix a , Matrix b){
        Matrix res;
        for(int i = 0 ; i < 2 ; ++i){
            for(int j = 0 ; j < 2 ; ++j){
                res.F[i][j] = 0;
                for(int k = 0 ; k < 2 ; ++k){
                    res.F[i][j] += ((a.F[i][k]  % MOD)* (b.F[k][j] % MOD)) % MOD;;
                    res.F[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

Matrix  powMod(Matrix a , long long n)
{
    if(n == 1) return a;
    Matrix  x = powMod(a , n / 2);
    if(n % 2 == 0)
    {
        return x * x;
    }
    else return a * x * x;
}
void Process(){
    long long n ; cin >> n;
    Matrix f;
    f.F[0][0] = 1;
    f.F[0][1] = 1;
    f.F[1][0] = 1;
    f.F[1][1] = 0;
    Matrix res = powMod(f, n);
    cout << res.F[0][1] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    