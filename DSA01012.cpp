/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
void Try(string s){
    if(s.size() == n){
        cout << s[0];
        for(int i = 1 ; i < n ; ++i){
            if(s[i] != s[i - 1]) cout << 1;
            else cout << 0;
        }
        cout << ' ';
        return;
    }
    Try(s + "0");
    Try(s + "1");
}
void Process(){
    cin >> n;
    Try("");
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    