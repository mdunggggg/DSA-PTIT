/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    int dd[26] = {};
    int count = 0;
    for(char c : s){
        ++dd[c - 'a'];
        count = max(count , dd[c - 'a']);
    }
    int n = s.size();
    if(count <= (n + 1) / 2){
        cout << "1\n";
    }
    else cout << "-1\n";

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    