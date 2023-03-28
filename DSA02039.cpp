/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
vector<int>cur;
vector<vector<int>>v;
void Try(int sum , int idx){
    if(sum > n) return;
    if(sum == n){
        v.push_back(cur);
        return;
    }
    for(int i = idx ; i >= 1 ; --i){
        cur.push_back(i);
        Try(sum + i , i);
        cur.pop_back();
    }
}
void Process(){
    cin >> n;
    cur.clear();
    v.clear();
    Try(0 , n);
    cout << v.size() << '\n';
    for(auto vt : v){
        cout << "(";
        for(int i = 0 ; i < vt.size() - 1; ++i){
            cout << vt[i] << ' ';
        }
        cout << vt.back() << ") ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    