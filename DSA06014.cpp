/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int isPrime[MAX+1];
void sieve() {
   
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i <= sqrt(MAX); ++i) {
         if(isPrime[i] == 0) {
             for(int j = i * i; j <= MAX; j += i)
                 isPrime[j] = 1;
        }
    }
}
void Process(){
    int n ; cin >> n;
    for(int i = 2 ; i <= n / 2; ++i){
        if(!isPrime[i] && !isPrime[n - i]){
            cout << i << ' ' << n - i << "\n";
            return;
        }
    }
    cout << "-1\n";
}
int main(){
    Faster();
    sieve();
    int t; cin >> t;
    while(t--)
        Process();
}
    