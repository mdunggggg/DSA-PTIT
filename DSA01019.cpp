/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
bool HAHA(string s){
    int n = s.size();
    if(s[0] != 'H' || s[n - 1] != 'A')
        return false;
    for(int i = 1 ; i < n - 1 ; ++i){
        if(s[i] == s[i - 1] && s[i] == 'H')
            return false;
    }
    cout << s << '\n';
    return true;
}
void Try(string s){
    if(s.size() == n){
        HAHA(s);
        return;
    }
    Try(s + "A");
    Try(s + "H");
}
void Process(){
    cin >> n;
    Try("");
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    