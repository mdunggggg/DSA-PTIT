/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
vector<string>v;
vector<string>vv;
void disPlay(int i){
    if(i >= n) return;
    vv.push_back(v[i]);
    disPlay(2 * i + 1);
    disPlay(2 *  i + 2);
}
void Process(){
    cin >> n;
    v.clear();
    vv.clear();
    v.resize(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> v[i];
    }
    disPlay(0);
    stack<int>st;
    for(int i = n - 1 ; i >= 0 ; --i){
        if(isdigit(vv[i][0])){
            st.push(stoi(vv[i]));
        }
        else{
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            if(vv[i] == "+"){
                st.push(x + y);
            }
            else if(vv[i] == "-"){
                st.push(x - y);
            }
            else if(vv[i] == "*"){
                st.push(x * y);
            }
            else{
                st.push(x / y);
            }
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
    