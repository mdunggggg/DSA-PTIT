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
    for(int &x : a){
        cin >> x;
    }
    vector<int>f(a , a + n), g(a , a + n);
    for(int i = 1 ; i < n ; ++i)
        f[i] = max(f[i - 1], a[i]);
    for(int j = n - 2 ; j >= 0 ; --j)
        g[j] = min(g[j + 1], a[j]);
    vector<int>v;
    for(int i = 0 ; i < n - 1; ++i){
        if(f[i] <= g[i + 1]){
            v.push_back(i + 1);
        }
    }
    cout << v.size() << '\n';
    for(int x : v){
        cout << x << ' ';
    }
    cout << '\n';
}

int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    