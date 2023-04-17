/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[5];
string s = "+-*";
int calc(int x, int y, char c){
    if(c == '+') return x + y;
    if(c == '-') return x - y;
    return x * y;
}
void Process(){
    for(int i = 0; i < 5; ++i){
        cin >> a[i];
    }
    int b[5];
    iota(b, b + 5, 0);
    int ans = 0;
    do{
        for(int i = 0 ; i < 3 ; ++i){
            for(int j = 0 ; j < 3 ; ++j){
                for(int k = 0; k < 3 ; ++k){
                    for(int l = 0 ; l < 3 ; ++l){
                        ans = calc(a[b[0]], a[b[1]], s[i]);
                        ans = calc(ans, a[b[2]], s[j]);
                        ans = calc(ans, a[b[3]], s[k]);
                        ans = calc(ans, a[b[4]], s[l]);
                        if(ans == 23){
                            cout << "YES\n";
                            return;
                        }
                    }
                }
            }
        }
    }while(next_permutation(b , b + 5));
    cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    