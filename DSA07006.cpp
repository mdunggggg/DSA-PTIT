/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int sz, n, c;
vector<int>v, a;
string s; 
map<string, bool>mp;
stack<pair<char, int>>st;
void calc(){
    string cur = "";
    vector<int>tmp = a;
    for(int i = 0 ; i < n ; ++i){
        int flag = 1;
        for(int j : v){
            if(tmp[i] == j){
                tmp[i] = -2;
            }
        }
    }
    for(int i = 0; i < n ; ++i){
        if(tmp[i] != -2){
            cur += s[i];
        }
    }
    mp[cur] = 1;
   
}
void Try(int i){
    if(i > sz) return;
    for(int j = i ; j <= sz ; ++j){
        v.push_back(j);
        calc();
        Try(j + 1);
        v.pop_back();
    }
}
void Process(){
    cin >> s;
    n = s.size();
    a.assign(n , -1);
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '('){
            ++c;
            st.push({s[i], c});
            a[i] = c;
        }
        else if(s[i] == ')'){
            a[i] = st.top().second;
            st.pop();
        }
    }
    sz = c;
    Try(1);
    for(auto it : mp){
        cout << it.first << '\n';
    }
   
}
int main(){
    Faster();
        Process();
}
    