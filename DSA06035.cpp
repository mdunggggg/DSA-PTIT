/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    int left[n], right[n];
    left[0] = 1;
    for(int i = 1 ; i < n ; ++i){
        if(a[i] > a[i - 1]) left[i] = left[i - 1] + 1;
        else left[i] = 1;
    }
    right[n - 1] = 1;
    for(int i = n - 2 ; i >= 0 ; --i){
        if(a[i] > a[i + 1]) right[i] = right[i + 1] + 1;
        else right[i] = 1;
    }
    int res = -1;

    for(int i = 0 ; i < n - 1; ++i){
        res = max(res , left[i] + right[i] - 1);
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    