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
    for(int &x : a)
        cin >> x;
    stack<int>st;
    int greater[n], smaller[n];
    for(int i = n - 1 ; i >= 0 ; --i){
        while(!st.empty() && a[st.top()]  <= a[i]){
            st.pop();
        }
        if(st.empty()) greater[i] = -1;
        else greater[i] = st.top();
        st.push(i);
    }
   
    while(!st.empty()) st.pop();
    for(int i = n - 1 ; i >= 0 ; --i){
        while(!st.empty() && st.top() >= a[i]){
            st.pop();
        }
        if(st.empty()) smaller[i] = -1;
        else smaller[i] = st.top();
        st.push(a[i]);
    }
    cout << '\n';
    for(int i = 0 ; i < n ; ++i){
        if(greater[i] != -1){
            cout << smaller[greater[i]] << ' ';
        }
        else cout << -1 << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    