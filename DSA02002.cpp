/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , a[1000];
vector<vector<int>>v;

void disPlay(int n){
    vector<int>cur(a + 1 , a + 1 + n);
    v.push_back(cur);
}
void Try(int n){
    if(n == 0)
        return;
    for(int i = 1 ; i <= n ; ++i)
        a[i] += a[i + 1];
    disPlay(n);
    Try(n - 1);
}
void Process(){
    cin >> n;
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    v.clear();
    disPlay(n);
    Try(n - 1);
    reverse(v.begin(), v.end());
    for(auto it : v){
        cout << '[';
        for(int i = 0 ; i < it.size() - 1 ; ++i)
            cout << it[i] << ' ';
        cout << it.back() << "] ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    