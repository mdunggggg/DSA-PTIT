/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string u, v;
string right(string s){
    string t = s;
    t[1] = s[4];
    t[2] = s[1];
    t[4] = s[5];
    t[5] = s[2];
    return t;
}
string left(string s){
    string t = s;
    t[0] = s[3];
    t[1] = s[0];
    t[3] = s[4];
    t[4] = s[1];
    return t;
}
int bfs(string s, string t){
    queue<pair<string, int>>q;
    q.push({s, 0});
    set<string>se;;
    while(!q.empty()){
        pair<string,int>top = q.front();
        q.pop();
        if(top.first == t){
            return top.second;
        }
        string cur = left(top.first);
        if(se.find(cur) == se.end()){
            q.push({cur, top.second + 1});
            se.insert(cur);
        }
        cur = right(top.first);
        if(se.find(cur) == se.end()){
            q.push({cur, top.second + 1});
            se.insert(cur);
        }
    }
    return -1;
}
void Process(){
    int x;
    u = "", v = "";
    for(int i = 0 ; i < 6; ++i){
        cin >> x;
        u += to_string(x);
    }
    for(int i = 0 ; i < 6; ++i){
        cin >> x;
        v += to_string(x);
    }
    cout << bfs(u, v) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    