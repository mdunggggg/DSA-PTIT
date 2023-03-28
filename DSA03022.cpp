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
    sort(a , a + n);
    int x = max(a[0] * a[1] , a[n - 1] * a[n - 2]);
    int y = max({a[0] * a[1] * a[2] , a[n - 1] * a[n - 2] * a[n - 3], a[n - 1] * a[0] * a[1]});
    cout << max(x, y);
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    