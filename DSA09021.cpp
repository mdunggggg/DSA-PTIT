/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int a[n + 5][n + 5];
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= n ; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        int flag = 0;
        for(int j = 1 ; j <= n ; ++j){
            if(i != j && a[i][j]){
                cout << j << ' ';
                flag = 1;
            }
        }
        if(flag) cout << '\n';
    }
}
int main(){
    Faster();
        Process();
}
    