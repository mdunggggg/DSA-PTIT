/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a , a + n);
    long long x = 0 , y = 0;
    for(int i = 0 ; i < n ; ++i){
        if(i & 1) x = x * 10 + a[i];
        else y = y * 10 + a[i];
    }
    cout << x + y << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    