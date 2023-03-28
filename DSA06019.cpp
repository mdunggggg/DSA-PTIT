/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    map<int, int>mp;
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<int,int>>v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), [](pair<int,int>a , pair<int, int>b){
        if(a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    });
    for(auto [i , j] : v){
        for(int k = 0 ; k < j ; ++k){
            cout << i << ' ';
        }
    }
    cout << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    