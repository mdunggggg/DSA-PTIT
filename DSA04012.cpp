/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m;
    cin >> n >> m;
    int p[n] , q[m];
    int f[n + m] = {};
    for(int &x : p)
        cin >> x;
    for(int &x : q)
        cin >> x;
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            f[i + j] += p[i] * q[j];
        }
    }
    for(int i = 0 ; i + 1 < n + m ; ++i){
        cout << f[i] << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    