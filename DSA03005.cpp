/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int k; cin >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a , a + n);
    k = min(k , n - k);
    int x = accumulate(a, a + k , 0);
    int y = accumulate(a , a + n , 0);
    cout << y - 2 * x << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    