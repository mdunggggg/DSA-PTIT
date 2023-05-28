/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int sz;
string s;
map<string, int>mp;
bool check(string s){
    if(s.size() < 2) 
        return false;
    stack<char>st;
    for(char c : s){
        if(c == '('){
            st.push(c);
        }
        else if(c == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else 
                return false;
        }
    }
    return st.empty();
}
void Try(string t, int pos){
    if(check(t) and t.size() != 1){
        if(t.size() > sz){
            sz = t.size();
            mp.clear();
            mp[t] = 1;
        }
        else if(t.size() == sz){
            mp[t] = 1;
        }
        return;
    }
    for(int i = pos ; i < t.size(); ++i){
        if(t[i] == '(' or t[i] == ')'){
            string cur = t;
            cur.erase(cur.begin() + i, cur.begin() + i + 1);
            Try(cur, i);
        }
    }
}
void Process(){
    cin >> s;
    mp.clear();
    sz = 0;
    Try(s, 0);
    bool flag = false;
    for(auto it : mp){
        cout << it.first << ' ';
        flag = true; 
    }
    if(!flag){
        cout << "-1";
    }
    cout << '\n';
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}