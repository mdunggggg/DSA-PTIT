/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
int isPrime[MAX + 1];
int n, a[100];
vector<int>cur;
vector<vector<int>>res;
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
void Try(int i, int sum){
    if(!isPrime[sum]){
        res.push_back(cur);
    }
    for(int j = i ; j < n ; ++j){
        cur.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        cur.pop_back();
    }


}
void Process(){
    cin >> n;
    cur.clear();
    res.clear();
    for(int i = 0 ; i < n ; ++i)
        cin >> a[i];
    Try(0 , 0);
    for(auto &i : res){
        sort(i.rbegin(), i.rend());
    }
   sort(res.begin(), res.end());
    for(auto i : res){
        for(int j : i){
            cout << j << ' ';
        }
        cout << '\n';
    }
}
int main(){
    Faster();
    sieve();
    int t; cin >> t;
    while(t--)
        Process();
}
    