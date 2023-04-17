/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int a[n];
    map<int,int>mp;
    for(int &x : a){
        cin >> x;
        ++mp[x];
    }
    int b[n];
    for(int i = 0; i < n; ++i){
        b[i] = mp[a[i]];
    }
    int f[n];
    stack<int>st;
    for(int i = n - 1 ; i >= 0 ; --i){
        while(!st.empty() && b[st.top()] <= b[i]){
            st.pop();
        }
        if(st.empty()) f[i] = -1;
        else f[i] = a[st.top()];
        st.push(i);
    }
    for(int &x : f){
        cout << x << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    