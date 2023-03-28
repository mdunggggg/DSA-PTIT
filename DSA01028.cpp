/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k ;
vector<int>v;
int a[100];
void DisPlay(){
    for(int i = 1 ; i <= k ; ++i){
        cout << v[a[i] - 1] << ' ';
    }
    cout << '\n';
}
void Try(int i){
    for(int j = a[i - 1] + 1 ; j <= n - k + i ; ++j){
        a[i] = j;
        if(i == k){
            DisPlay();
        }
        else
            Try(i + 1);
    }
}
void Process(){
    cin >> n >> k;
    memset(a , 0 , sizeof(a));
    set<int>se;
    for(int i = 0 ; i < n ; ++i)
    {
        int x; cin >> x;
        se.insert(x);
    }
    for(int x : se){
        v.push_back(x);
    }
    n = v.size();
    Try(1);
    cout << '\n';
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    