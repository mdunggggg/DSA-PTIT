/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<int>ans;
int vs[5];
void Try(int n){
    ans.push_back(n);
    for(int i = 0 ; i <= 5 ; ++i){
        if(!vs[i]){
            vs[i] = 1;
            Try(n * 10 + i);
            vs[i] = 0;
        }
    }
}
void Ready(){
    for(int i = 1 ; i <= 5 ; ++i){
        vs[i] = 1;
        Try(i);
        vs[i] = 0;
    }
    sort(ans.begin(), ans.end());
}
void Process(){
    int l, r;
    cin >> l >> r;
    cout << upper_bound(ans.begin(), ans.end(), r) - lower_bound(ans.begin(), ans.end(), l) << '\n';
}
int main(){
    Faster();
    Ready();
    int t; cin >> t;
    while(t--)
        Process();
}
    