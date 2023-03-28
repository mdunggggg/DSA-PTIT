/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , s, a[35], res = 1e9;
void Try(int i , int count , int sum){
    if(sum > s || count > res) return;
    if(sum == s){
        res = min(res, count);
        return;
    }
    for(int j = i + 1 ; j <= n ; ++j){
        Try(j, count + 1, sum + a[j]);
    }
}
void Process(){
    cin >> n >> s;
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    Try(0, 0, 0);
    if(res == 1e9) cout << "-1\n";
    else cout << res << '\n';
}
int main(){
    Faster();
        Process();
}
    