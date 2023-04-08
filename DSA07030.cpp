/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , m ; cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    for(int j = 0 ; j < m ; ++j){
        for(int i = 1 ; i < n ; ++i){
            if(a[i][j]){
                a[i][j] += a[i - 1][j];
            }
            else   
                a[i][j] = 0;
        }
    }
    int ans = 0;
    int left[m], right[m];
    for(int i = 0 ; i < n ; ++i){
        stack<int>st;
        for(int j = 0 ; j < m ; ++j){
            while(!st.empty() && a[i][st.top()] >= a[i][j]){
                st.pop();
            }
            if(st.empty()) left[j] = 0;
            else left[j] = st.top() + 1;
            st.push(j);
        }
        while(!st.empty()) st.pop();
        for(int j = m - 1; j >= 0 ; --j){
             while(!st.empty() && a[i][st.top()] >= a[i][j]){
                st.pop();
            }
            if(st.empty()) right[j] = m - 1;
            else right[j] = st.top() - 1;
            st.push(j);
        }
        for(int j = 0 ; j < m ; ++j){
            ans = max(ans, a[i][j] * (right[j] - left[j] + 1));
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
    