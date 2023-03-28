/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int n = s.size();
    int i = n - 1;
    while(i >= 0 && s[i] == '0'){
        s[i] = '1';
        i--;
        
    }
    if(i >= 0){
        s[i] = '0';
        cout << s << '\n';
    }
    else{
        cout << string(n , '1') << '\n';
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    