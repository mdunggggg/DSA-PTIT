/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
     int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n / 2; ++i) {
        cout << a[i] << " " << a[n - i - 1] << " ";
    }
    if (n % 2 != 0) cout << a[n / 2];
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    