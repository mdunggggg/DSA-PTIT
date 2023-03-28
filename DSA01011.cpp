/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    string s; cin >> s;
    if(next_permutation(s.begin(),s.end())){
        cout << n << ' ' << s << '\n';
    }
    else {
        cout << n << ' ' << "BIGGEST\n";
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    