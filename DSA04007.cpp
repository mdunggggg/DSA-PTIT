/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s, t;
    int k;
    cin >> k >> s >> t;
    long long a = 0 , b = 0;
    int n = s.size();
    int m = t.size();
    for(int i = 0 ; i < n ; ++i){
        a += (s[i] - '0') * 1ll * pow(k , n - i - 1);
    }
    for(int i = 0 ; i < m ; ++i){
        b += (t[i] - '0') * 1ll * pow(k , m - i - 1);
    }
   
    a += b;
    string res = "";
    while(a){
        res += to_string(a % k);
        a /= k;
    }
    reverse(res.begin() , res.end());
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    