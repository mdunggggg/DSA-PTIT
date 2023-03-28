/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , c; cin >> c >> n;
    int f[c + 5] = {};
    int w[n + 5];
    for(int i = 1 ; i <= n ; ++i)
        cin >> w[i];
    for(int i = 1 ; i <= n ; ++i){
        for(int j = c ; j >= w[i]; --j){
            f[j] = max(f[j], f[j - w[i]] + w[i]);
        }
    }
    cout << f[c];
}
int main(){
    Faster();
        Process();
}
    