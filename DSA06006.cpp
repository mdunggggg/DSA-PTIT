/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int x = 0 , y = 0 , z = 0;
    for(int i = 0 ; i < n ; ++i){
        int k; cin >> k;
        x = x + (k == 0);
        y = y + (k == 1);
        z = z + (k == 2);
    }
    for(int i = 0 ; i < x ; ++i){
        cout << 0 << ' ';
    }
    for(int i = 0 ; i < y ; ++i){
        cout <<  1 << ' ';
    }
    for(int i = 0 ; i < z ; ++i){
        cout << 2 << ' '; 
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    