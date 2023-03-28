/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int Max = n / 7;
    for(int i = Max ; i >= 0 ; --i){
        int x = n - 7 * i;
        if(x % 4 == 0){
            for(int j = 0 ; j < x / 4 ; ++j) cout << 4;
            for(int j = 0 ; j < i ; ++j) cout << 7;
            cout << '\n';
            return;
        }
    }
    cout << "-1\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    