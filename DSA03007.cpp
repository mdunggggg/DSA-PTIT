/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int &x : a)
        cin >> x;
    sort(a , a + n);
    for(int &x : b)
        cin >> x;
    sort(b , b + n);
    long long res = 0;
    for(int i = 0 ; i < n ; ++i){
        res += a[i] * b[n - i - 1];
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    