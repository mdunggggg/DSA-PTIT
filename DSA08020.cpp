/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int S, T;
int d[4] = {1000, 100, 10, 1};
int isPrime[MAX + 1];
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
int bfs(){
    map<int,int>mp;
    queue<int>q;
    q.push(S);
    mp[S] = 1;
    while(!q.empty()){
        int n = q.front();
        q.pop();
        if(n == T){
            return mp[n] - 1;
        }
        for(int i = 0 ; i < 4 ; ++i){
            for(int k = 0 ; k < 10 ; ++k){
                int v = d[i] * (((n / d[i])/ 10) * 10 + k) +  n % d[i];
                if(v > 1000 and mp[v] == 0 and !isPrime[v]){
                    mp[v] = mp[n] + 1;
                    q.push(v);
                }
            }
        }
    }
    return -1;
}
void Process(){
    cin >> S >> T;
    cout << bfs() << '\n';
}
int main(){
    Faster();
    sieve();
    int t; cin >> t;
    while(t--)
        Process();
}
    