/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s; cin >> s;
    stack<int>st;
    int n = s.size();
    for(int i = 0 ; i <= n ; ++i){
        st.push(i + 1);
        if( i == n ||s[i] == 'I' ){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
        }
    }
   
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    