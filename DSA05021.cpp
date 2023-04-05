/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    vector<pair<int,int>>v(n);
    for(int i = 0; i < n ; ++i){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    vector<int>dp(n , 1);
    for(int i = 1 ; i < n ; ++i){
        for(int j = 0 ; j < i ; ++j){
            if(v[i].first > v[j].second){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    