/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ;
    cin >> n >> m;
    int a[n], b[m];
    for(int &x : a)
        cin >> x;
    for(int &x : b)
        cin >> x;
    cout << 1ll * *max_element(a , a + n)* *min_element(b , b + m) << '\n';;
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    