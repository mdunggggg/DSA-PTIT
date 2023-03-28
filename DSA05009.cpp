/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int sum = 0;
    int a[n];
    for(int &x : a){
        cin >> x;
        sum += x;
    }
    if(sum & 1){
        cout << "NO\n";
        return;
    }
    sort(a , a + n);
    sum /= 2;
    int f[sum + 5] = {};
    f[0] = 1;
    for(int i = 0 ; i < n ; ++i){
        for(int j = sum ; j >= a[i]; --j){
            if(f[j - a[i]])
                f[j] = 1;
        }
    }
    if(f[sum]) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    