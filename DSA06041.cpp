/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int count = 0, val ;
    map<int, int>mp;
    for(int i = 0 ; i < n ; ++i){
        int x; cin >> x;
        ++mp[x];
        if(count < mp[x]){
            val = x;
            count = max(count , mp[x]);
        }
        
    }
    if(count > n / 2) cout << val << '\n';
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    