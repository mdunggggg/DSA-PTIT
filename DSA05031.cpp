/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e4 + 5;
int f[MAX];
void Prepare(){
    for(int i = 1 ; i < MAX ; ++i){
        f[i] = 1e9;
        for(int j = 1 ; j <= sqrt(i) ; ++j){
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }
}
void Process(){
    int n;
    cin >> n;
    cout << f[n] << '\n';
}
int main(){
    Faster();
    Prepare();
    int t; cin >> t;
    while(t--)
        Process();
}
    