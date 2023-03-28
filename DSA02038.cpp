/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k , a[20];
vector<int>cur;
vector<vector<int>>v;
void Try(int i , int count){
    if(count == k){
        v.push_back(cur);
        return;
    }
    for(int j = i + 1 ; j <= n ; ++j){
        cur.push_back(a[j]);
        Try(j , count + 1);
        cur.pop_back();
        
    }
}
void Process(){
    cin >> n >> k;
    cur.clear();
    v.clear();
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    sort(a + 1 , a + n + 1);
    Try(0, 0);
    for(auto x : v){
        for(int y : x){
            cout << y << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    