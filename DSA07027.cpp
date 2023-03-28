/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    stack<int>st;
    int b[n];
    for(int i = n - 1 ; i >= 0 ; --i){
        while(!st.empty() && st.top() <= a[i]) st.pop();
        if(st.empty()) b[i] = -1;
        else b[i] = st.top();
        st.push(a[i]);
    }
    for(int i = 0 ; i < n ; ++i)
        cout << b[i] << ' ';
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    