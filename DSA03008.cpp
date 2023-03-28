/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n ; ++i){
        int x; cin >> x;
        v.push_back({a[i], x});
    }
    sort(v.begin(), v.end(), [](pair<int, int> x , pair<int, int> y){
        return x.second < y.second;
    });
    int res = 1;
    int last = v[0].second;
    for(int i = 1 ; i < n ; ++i){
        if(v[i].first >= last){
            ++res;
            last = v[i].second;
        }   
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    