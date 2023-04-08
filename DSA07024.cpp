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
    for(int &x : a){
        cin >> x;
    }
    int left[n], right[n];
    stack<int>st;
    for(int i = 0 ; i < n ; ++i){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if(st.empty()) left[i] = 0;
        else left[i] = st.top() + 1;
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i = n - 1 ; i >= 0 ; --i){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if(st.empty()) right[i] = n - 1;
        else right[i] = st.top() - 1;
        st.push(i);
    }
    int ans = 0;
    for(int i = 0 ; i < n ; ++i){
        if(a[i] <= right[i] - left[i] + 1){
            ans = max(ans, a[i]);
        }
    }
    cout << ans << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    