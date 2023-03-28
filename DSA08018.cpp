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
    q.push(6);
    q.push(8);
    while(true){
        long long cur = q.front();
        v.push_back(cur);
        q.pop();
        q.push(cur * 10 + 6);
        q.push(cur * 10 + 8);
        if(to_string(cur).size() == 18) break;
    }
}
void Process(){
    int n; cin >> n;
    vector<long long>res;
  //  cout << string(n )
    for(auto it : v){
        if(to_string(it).size() > n) break;
        res.emplace_back(it);
    }
    cout << res.size() << '\n';
    for(int i = 0 ; i < res.size() ; ++i)
        cout << res[i] << " ";
    cout << '\n';
}
int main(){
    Faster();
    Ready();
    int t; cin >> t;
    while(t--)
        Process();
}
    