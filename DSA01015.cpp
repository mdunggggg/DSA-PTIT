/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
queue<long long>q;
vector<long long>v;
void Ready(){
    q.push(9);
    while(q.size() <= 10000){
        long long cur = q.front();
        q.pop();
        v.push_back(cur);
        q.push(cur * 10);
        q.push(cur * 10 + 9);
    }
}
void Process(){
    int n; cin >> n;
    for(auto it : v){
        if(it % n == 0){
            cout << it << '\n';
            return;
        }
    }
}
int main(){
    Faster();
    Ready();
    int t; cin >> t;
    while(t--)
        Process();
}
    