/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
    string s; cin >> s;
    cout << s[0];
    for(int i = 1 ; i < s.size(); ++i){
        if(s[i] != s[i - 1]) cout << 1;
        else cout << 0;
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    