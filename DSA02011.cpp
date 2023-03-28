/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[45], n, res = 1e9, S;
void Try(int i , int sum , int cnt){
    if(cnt > res || sum > S) return;
    if(sum == S){
        res = min(cnt , res);
        return;
    }
    for(int j = i ; j <= n ; ++j){
        Try(j + 1, sum + a[j], cnt + 1);
    }
}
void Process(){
    cin >> n >> S;
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    res = 1e9;
    sort(a + 1, a + n + 1, greater<int>());
    Try(1 , 0 , 0);
    if(res == 1e9) 
        cout << "-1\n";
    else
        cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    