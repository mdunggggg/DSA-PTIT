/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int x;
    set<int>se;
    for(int i = 0 ; i < n ; ++i){
        cin >> x;
        while(x){
            se.insert(x % 10);
            x /= 10;
        }
    }
    for(auto it : se) cout << it << ' ';
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    