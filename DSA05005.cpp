/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n + 5] , f[n + 5] = {};
    for(int i = 1 ; i <= n ; ++i)
        cin >> a[i];
    f[1] = 1;
    for(int i = 2 ; i <= n ; ++i){
        f[i] = 1;
        for(int j = 1 ; j < i ; ++j){
            if(a[i] >= a[j]){
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << n - *max_element(f + 1 , f + 1 + n) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    