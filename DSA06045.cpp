/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    string s; cin >> s;
    long long ans = 1ll * n * (n - 1) / 2;
    int cnt = 1;
    vector<int>v;
    for(int i = 1 ; i < n ; ++i){
        if(s[i] == s[i - 1]){
            ++cnt;
        }
        else{
            v.push_back(cnt);
            cnt = 1 ;
        }
    }
    v.push_back(cnt);
    n = v.size();
    for(int i = 1 ; i < n ; ++i){
        ans -= (v[i] + v[i - 1] - 1)  ;      
    }
    cout << ans;
}
int main(){
    Faster();
        Process();
}
    