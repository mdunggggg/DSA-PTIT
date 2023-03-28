/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int d; cin >> d;
    string s; cin >> s;
    int dd[127] = {};
    int maxx = 0;
    for (char i : s) {
        dd[i]++;
        maxx = max(maxx, dd[i]);
    }
    if (maxx <= ceil((float)s.length() / d)) cout << 1;
    else cout << -1;
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    