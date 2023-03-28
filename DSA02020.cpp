/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int divisors[MAX + 1];
vector<vector<int>> factors(MAX, vector<int>());
void DivisorSieve()
{
 for (int i = 1; i <= MAX; ++i){
      for (int j = i; j <= MAX; j += i){
          ++divisors[j];
          //factors[j].emplace_back(i);
      }
 }
}
void Process(){
    int n;
    cin >> n;
    long long i = 1;
    while(divisors[i] != n){
        ++i;
    }
    cout << i << '\n';
}
int main(){
    Faster();
    DivisorSieve();
    int t; cin >> t;
    while(t--)
        Process();
}
    