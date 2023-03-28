/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , k ;
    cin >> n >> k;
    int a[n];
    for(int &x : a)
        cin >> x;
    int pos = upper_bound(a , a + n , k) - a;
    if(a[pos - 1] == k) cout << pos << '\n';
    else cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    