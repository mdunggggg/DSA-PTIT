/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Try(string s, int n){
    if(s.size() == n){
        string t = s;
        reverse(t.begin(), t.end());
        if(t == s){
            for(char c : s){
                cout << c << ' ';
            }
            cout << '\n';
        }
        
        return;
    }
    Try(s + "0", n);
    Try(s + "1", n);
}
void Process(){
    int n ; cin >> n;
    Try("", n);
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    