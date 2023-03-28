/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k;

void Process(){
    cin >> n >> k;
    int a[100] = {}, dd[100] = {};
    for(int i = 1 ; i <= k ; ++i){
        cin >> a[i];
        ++dd[a[i]];
    }
    int i = k;
    while(i > 0 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        cout << k << '\n';
        return;
    }
    ++a[i];
    int res = 0;
    for(int j = i + 1 ; j <= k ; ++j){
        a[j] = a[j - 1] + 1;
    }
    for(int i = 1 ; i <= k ; ++i){
        if(dd[a[i]] == 0)
            ++res;
    }
    cout << res << '\n';
        
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    