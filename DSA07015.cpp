/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int calc(string c){
    if(c == "(" or c == ")") return 0;
    if(c == "+" or c == "-") return 1;
    if(c == "*" or c == "/") return 2;
    return 3;
}
void Process(){
    string s;
    cin >> s;
    vector<string>v;
    int n = s.size();
    string cur = "";
    for(int i = 0; i < n ; ++i){
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                cur += s[i];
                ++i;
            }
            --i;
            v.push_back(cur);
            cur = "";
        }
        else{
            v.push_back(string(1, s[i]));
        }
    }
    vector<string>vv;
    n = v.size();
    stack<string>st;
    for(int i = 0 ; i < n ; ++i){
        if(isdigit(v[i][0])){
            vv.push_back(v[i]);
        }
        else if(v[i] == "("){
            st.push("(");
        }
        else{
            if(v[i] == ")"){
                while(!st.empty() and st.top() != "("){
                    vv.push_back(st.top());
                    st.pop();
                }
            }
            else{
                while(!st.empty() and calc(v[i]) <= calc(st.top())){
                    vv.push_back(st.top());
                    st.pop();
                }
                st.push(v[i]);
            }
        }
    }
    while(!st.empty()){
        vv.push_back(st.top());
        st.pop();
    }
    stack<long long>st2;
    n = vv.size();
    for(int i = 0 ; i < n ; ++i){
        if(isdigit(vv[i][0])){
            st2.push(stol(vv[i]));
        }
        else{
            long long x = st2.top();
            st2.pop(); 
            long long y = st2.top();
            st2.pop();
            if(vv[i] == "+"){
                st2.push(x + y);
            }
            else if(vv[i] == "-"){
                st2.push(y - x);
            }
            else if(vv[i] == "*"){
                st2.push(x * y);
            }
            else st2.push(y / x);
        }
    }
    cout << st2.top() << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    