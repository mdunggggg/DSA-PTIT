/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int isPrime[MAX+1];
vector<int> prime;
void sieve() {
   
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i <= sqrt(MAX); ++i) {
         if(isPrime[i] == 0) {
            prime.push_back(i);
             for(int j = i * i; j <= MAX; j += i)
                 isPrime[j] = 1;
        }
    }
}
void Process(){
    int n; cin >> n;
    long long k = 0;
    for(int i = 2 ; i <= sqrt(n); ++i){
        if(n % i == 0){
            
        }
    }
}
int main(){
    Faster();
    sieve();
    int t; cin >> t;
    while(t--)
        Process();
}
    