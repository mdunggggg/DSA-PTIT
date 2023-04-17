/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
set<long long>se;
vector<long long>v;
void Ready(){
    se.insert(1);
    while(true){
        for(long long i : se){
            if(i > 1e18) break;
            v.push_back(2 * i);
            v.push_back(3 * i);
            v.push_back(5 * i);
        }
        for(long long i : v){
            se.insert(i);
        }
        v.clear();
        if(se.size() > 1e4) 
            break;
    }
    for(long long i : se){
        v.push_back(i);
    }
}
void Process(){
    int n;
    cin >> n;
    cout << v[n - 1] << '\n'; 
}
int main(){
    Faster();
    Ready();
    int t; cin >> t;
    while(t--)
        Process();
}
    