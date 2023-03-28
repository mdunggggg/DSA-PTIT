/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , s;
    cin >> n >> s;
    int a[n];
    for(int &x : a)
        cin >> x;
    int f[s + 5] = {};
    f[0] = 1;
    for(int i = 0 ; i < n ; ++i){
        for(int j = s ; j >= a[i]; --j){
            if(f[j - a[i]])
                f[j] = 1;
        }
    }
    if(f[s]) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    