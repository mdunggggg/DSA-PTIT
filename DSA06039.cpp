/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    map<int,int>mp;
    int a[n];
    for(int &x : a){
        cin >> x;
        ++mp[x];
    }
   for(int i = 0 ; i < n ; ++i){
        if(mp[a[i]] >= 2){
            cout << a[i] << '\n';
            return;
        }
   }
   cout << "NO\n";
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    