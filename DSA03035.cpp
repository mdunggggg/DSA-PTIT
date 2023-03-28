/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, s = 0;
    cin >> n;
    vector<int> a(n + 5), f(n + 5, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    //f[x] day tang dai nhat ket thuc tai vi tri x
    // f[a[i]]  = f[a[i] - 1] + 1;
    for (int i = 1; i <= n; i++){
        f[a[i]] = f[a[i] - 1] + 1;
        s = max(s, f[a[i]]);
    }
    cout << n - s;
}
int main(){
    Faster();
        Process();
}
    