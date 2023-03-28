/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; getline(cin >> ws , s);
    bool flag = true;
    stack<char> st;
    int n = s.size();
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }
        else{
            if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    cout << "Yes\n";
                    return;
                }
                while(!st.empty() && st.top() != '('){
                        st.pop();
                }
                st.pop();
            }
        }
    }
    cout << "No\n";
    }
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}