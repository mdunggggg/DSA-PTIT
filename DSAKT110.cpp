/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    long long f[n];
    f[0] = a[0];
    f[1] = max(a[1], a[0]);
    for(int i = 2 ; i < n ; ++i){
        f[i] = max(f[i - 2] + a[i] , f[i - 1]);
    }
    cout << f[n - 1] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    