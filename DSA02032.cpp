/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<int>cur;
vector<vector<int>>v;
int a[25], n , x;
void Try(int i , int sum){
    if(sum > x) return;
    if(sum == x){
        v.push_back(cur);
        return;
    }
    for(int j = i ; j < n ; ++j){
        cur.push_back(a[j]);
        Try(j, sum + a[j]);
        cur.pop_back();
    }
}
void Process(){
    cin >> n >> x;
    v.clear();
    cur.clear();
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    Try(0 , 0);
    if(v.size() == 0){
        cout << "-1\n";
        return;
    }
    cout << v.size() << ' ';
    for(auto it : v){
        cout << "{";
        for(int i = 0 ; i < it.size() - 1; ++i){
            cout << it[i] << ' ';
        }
        cout << it[it.size() - 1] << "} ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    