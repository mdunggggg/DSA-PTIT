/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
char c;
int k;
string s;
void Try(char i){
    if(s.size() == k){
        cout << s << '\n';
        return;
    }
    for(char j = i   ; j <= c ; ++j){
        s += j;
        Try(j);
        s.pop_back();
    }
}
void Process(){
    cin >> c >> k;
    Try('A');
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    