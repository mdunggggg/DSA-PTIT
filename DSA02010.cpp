/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , x;
vector<vector<int>>ans;
vector<int>v;
int a[1000];
void Try(int val , int idx){
    if(val > x) 
        return;
    if(val == x){
        ans.push_back(v);
        return;
    }
    for(int j = idx ; j < n ; ++j){
        v.push_back(a[j]);
        Try(val + a[j], j);
        v.pop_back();
    }
        
}
void Process(){
    cin >> n >> x;
    for(int i = 0 ; i < n ; ++i)
        cin >> a[i];
    sort(a , a + n);
    ans.clear();
    v.clear();
    Try(0, 0);
    if(ans.size() == 0){
        cout << "-1\n";;
        return;
    }
    for(auto x : ans){
        cout << "[";
        for(int i = 0 ; i < x.size() - 1; ++i){
            cout << x[i] << ' ';
        }
        cout << x[x.size() - 1] << "]";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    