/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
vector<vector<int>>f;
vector<int>a, v;
void Try(int i, int sum){
    if(sum & 1){
        f.push_back(v);
    }
    for(int j = i ; j < n ; ++j){
        v.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        v.pop_back();
    }
}
void Process(){
    cin >> n;
    a.resize(n);
    f.clear();
    v.clear();
    for(int &x : a)
        cin >> x;
    Try(0, 0);
    for(auto &x : f){
        sort(x.rbegin(), x.rend());
    }
    sort(f.begin(), f.end());
    for(auto &x : f){
        for(int i : x){
            cout << i << ' ';
        }
        cout << '\n';
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    