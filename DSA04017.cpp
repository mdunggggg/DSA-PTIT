/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
    cin >> n;
    int a[n], b[n - 1];
    for(int &x : a)
        cin >> x;
    for(int &x : b)
        cin >> x;
    for(int i = 0 ; i < n - 1; ++i){
        if(a[i] != b[i]){
            cout << i + 1 << '\n';
            return ;
        }
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    