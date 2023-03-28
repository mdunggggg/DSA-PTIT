/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    int f[n];
    for(int i = 0 ; i < n ; ++i)
        f[i] = 1;
    for(int i = 1 ; i < n ; ++i){
        for(int j = 0 ; j < i ; ++j){
            if(a[i] > a[j]){
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << *max_element(f , f + n);
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    