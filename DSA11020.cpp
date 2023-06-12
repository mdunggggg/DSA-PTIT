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
    set<int>se;
    for(int &x : a){
        cin >> x;
        se.insert(x);
    }
    if(is_sorted(a, a + n) and se.size() == n) cout << "1\n";
    else cout << "0\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    