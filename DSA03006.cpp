/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n], b[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b , b + n);
    for(int i = 0 ; i < n ; ++i){
        if(a[i] != b[n - i - 1] && a[i] != b[i]){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    