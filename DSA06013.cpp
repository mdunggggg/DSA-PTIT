/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , x;
    cin >> n >> x;
    int count = 0;
    for(int i = 0 ; i < n ; ++i){
       int cur; cin >> cur;
       count += (cur == x); 
    }
    if(count == 0) cout << "-1\n";
    else cout << count << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    