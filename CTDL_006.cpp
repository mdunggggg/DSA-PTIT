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
    map<int, int>mp;
    int a[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; ++i){
        if(!mp[a[i]]){
            cout << a[i] << ' ';
            mp[a[i]]++;
        }
    }
}
int main(){
    Faster();
        Process();
}
    