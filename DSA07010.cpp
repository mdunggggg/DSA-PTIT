/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    stack<string>st;
    int n = s.size();
    for(int i = n - 1 ; i >= 0 ; --i){
        if(isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string first = st.top(); st.pop();
            string second = st.top(); st.pop();
            st.push(first + second + s[i]);
        }
    }
    cout << st.top() << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    