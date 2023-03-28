/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int res = 1e9;
void Calc(int n){
    map<int, int>mp;
    queue<int>q;
    q.push(n);
    mp[n] = 0;
    while(!q.empty()){
        int top = q.front(); q.pop();
        if(top == 1){
            cout << mp[top] << '\n';
            return;
        }
        if(top % 2 == 0){
            int x = top / 2;
            if(mp[x] == 0){
                mp[x] = mp[top] + 1;
                q.push(x);
            }
        }
        if(top % 3 == 0){
            int x = top / 3;
            if(mp[x] == 0){
                mp[x] = mp[top] + 1;
                q.push(x);
            }
        }
        int x = top - 1;
        if(mp[x] == 0){
                mp[x] = mp[top] + 1;
                q.push(x);
        }
    }
}
void Process(){
    int n;
    cin >> n;
    Calc(n);
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    