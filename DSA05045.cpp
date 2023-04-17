/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int w; cin >> w;
    vector<pair<int,int>>v;
    v.resize(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](pair<int, int>a , pair<int,int>b){
        return a.first * b.second > a.second * b.first;
    });
    double ans = 0;
    for(int i = 0 ; i < n ; ++i){
        if(w >= v[i].second){
            ans += v[i].first;
            w -= v[i].second;
        }
        else{
            ans += v[i].first * w / v[i].second;
            break;
        }
    }
    cout << fixed << setprecision(2) << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    