/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n ; ++i){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    vector<pair<int,int>>dp;
    for(int i = 0 ; i < n ; ++i){
        auto it = lower_bound(dp.begin(), dp.end(), v[i]);
        if(it != dp.end()){
            *it = v[i];
            cout << "it = " << it - dp.begin() << '\n';
        }
        else{
            dp.push_back(v[i]);
            cout << "It2 = " << it - dp.begin() << '\n';
        }
        
    }
  //  cout << dp.size() << '\n';
}
int main(){
    Faster();
        Process();
}
    