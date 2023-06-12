/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
    int n; cin >> n;
    vector<pair<int,int>>v(n);
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin >> x >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](pair<int,int>a, pair<int,int>b){
        return a.second > b.second;
    });
    int cnt = 0, ans = 0, check[1005] = {};
    for(int i = 0 ; i < n ; ++i){
        while(v[i].first > 0 and check[v[i].first]){
            --v[i].first;
        }
        if(v[i].first > 0 and !check[v[i].first]){
            check[v[i].first] = 1;
            ++cnt;
            ans += v[i].second;
        }
    }
    cout << cnt << ' ' << ans << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}