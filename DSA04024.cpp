/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, k;
struct Matrix{
    long long F[100][100];
    friend istream& operator >> (istream &in , Matrix &x){
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n; ++j){
                in >> x.F[i][j];
            }
        }
        return in;
    }
    friend ostream& operator << (ostream &out , Matrix x){
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n; ++j){
                out << x.F[i][j] << ' ';
            }
            out << '\n';
        }
        return out;
    }
    friend Matrix operator * (Matrix a , Matrix b){
        Matrix res;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n ; ++j){
                res.F[i][j] = 0;
                for(int k = 0 ; k < n ; ++k){
                    res.F[i][j] += ((a.F[i][k]  % MOD)* (b.F[k][j] % MOD)) % MOD;;
                    res.F[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};
void Process(){
    cin >> n >> k;
    Matrix a;
    cin >> a;
    Matrix res;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(i == j)
                res.F[i][j] = 1;
            else 
                res.F[i][j] = 0;
        }
    }
    while(k){
        if(k & 1){
            res = res * a;
        }
        a = a * a;
        k /= 2;
    }
    //cout << res;
    long long ress = 0;
    for(int i = 0 ; i < n ; ++i){
        ress += res.F[i][n - 1];
        ress %= MOD;
    }
    cout << ress << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    