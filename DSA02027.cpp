/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , a[20][20], vis[20], res = 1e9;
void Try(int i , int sum , int cnt){
  
    if(sum > res) return;
    if(cnt == n){
        res = min(res , sum + a[i][1]);
        return;
    }
    for(int j = 2 ; j <= n ; ++j){
        if(!vis[j]){
            vis[j] = 1;
            Try(j , sum + a[i][j], cnt + 1);
            vis[j] = 0;
        }
    }
}
void Process(){
    cin >> n;
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= n ; ++j){
            cin >> a[i][j];
        }
    }
    vis[1] = 1;
    Try(1 , 0 , 1);
    cout << res << '\n';
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    