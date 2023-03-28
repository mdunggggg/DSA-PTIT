/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, k; 
void Try(string s){
    if(s.size() == n){
        int count = 0;
        for(char c : s)
            count += (c == '1');
        if(count == k){
            cout << s << '\n';
        }
        return;
    }
    Try(s + "0");
    Try(s + "1");
}
void Process(){
    cin >> n >> k;
    Try("");
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    