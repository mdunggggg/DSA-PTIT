/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Calc(int s , int t){
    map<int, bool>mp;
    queue<pair<int,int>>q;
    q.push({s, 0});
    while(!q.empty()){
        pair<int,int>top = q.front();
        q.pop();
        if (top.first == t) {
            cout << top.second;
            return;
        }
        if(top.first * 2 == t || top.first - 1 == t){
            cout << top.second + 1 << '\n';
            return;
        }
        if(top.first * 2 <= t * 2 && mp[top.first * 2] == 0){
            q.push({top.first * 2, top.second + 1});
            mp[top.first * 2] = 1;
        }
        if(top.first - 1 >= 0 && mp[top.first - 1] == 0){
            q.push({top.first - 1, top.second + 1});
            mp[top.first - 1] = 1;
        }
    }
    

}
void Process(){
    int s , t;
    cin >> s >> t;
    Calc(s , t);
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    