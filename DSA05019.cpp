/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ; cin >> n >> m;
    int ans = 0;
    int a[n][m];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            if(a[i][j] == 1 && i != 0){
                a[i][j] += a[i - 1][j];
            }
        }
    }
   
    int l[n], r[n];
    for(int i = 0 ; i < n ; ++i){
        stack<int>st;
        for(int j = 0 ; j < m ; ++j){
            while(!st.empty() && a[i][st.top()] >= a[i][j]){
                st.pop();
            }
            if(st.empty()) l[j] = 0;
            else l[j] = st.top() + 1;
            st.push(j);
        }
        while(!st.empty()) st.pop();
        for(int j = m - 1 ; j >= 0 ; --j){
            while(!st.empty() && a[i][st.top()] >= a[i][j]){
                st.pop();
            }
            if(st.empty()) r[j] = m - 1;
            else r[j] = st.top() - 1;
            st.push(j);
        }
        for(int j = 0 ; j < m ; ++j){
            ans = max(ans ,min(a[i][j], r[j] - l[j] + 1));
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
    