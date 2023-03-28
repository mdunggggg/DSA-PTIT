/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
long long f[100];
void Ready(){
    f[1] = 1;
    f[2] = 1;
    for(int i = 3 ; i <= 92 ; ++i){
        f[i] = f[i - 1] + f[i - 2];
    }
}
void Calc(long long n, long long k){
    if(n == 1){
        cout << "A\n";
        return; 
    }
    if(n == 2){
        cout << "B\n";
        return;
    }
    if(k <= f[n - 2]){
        Calc(n - 2, k);
    }
    else{
        Calc(n - 1, k - f[n - 2]);
    }
    
}
void Process(){
    long long n , k; 
    cin >> n >> k;
    Calc(n , k);
}
int main(){
    Faster();
    Ready();
   // for(int i = 1 ; i <= 20 ; ++i)
    //    cout << f[i] << ' ';
    int t; cin >> t;
    while(t--)
        Process();
}
    