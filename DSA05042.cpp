/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    long long k; cin >> k;
    long long sum = 0;
    map<long long, int>mp;
    bool ok = false;
    long long x;
    mp[0] = 1;
    for(int i = 0 ; i < n ; ++i){
        cin >> x;
        sum += x;
        if(mp[sum - k]){
            ok = true;
        }
        mp[sum]++;
    }
    cout << (ok ? "YES" : "NO") << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    