/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , x , y , z;
    cin >> n >> x >> y >> z;
    int f[n + 1];
    f[1] = x;
    for(int i = 2 ; i <= n ; ++i){
        if(i % 2 == 0){
            f[i] = min(f[i - 1] + x, f[i / 2] + z);
        }
        else{
            f[i] = min(f[i - 1] + x, f[(i + 1) / 2] + y + z);
        }
    }
    cout << f[n] << '\n';
        
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    