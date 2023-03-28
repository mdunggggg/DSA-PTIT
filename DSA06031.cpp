/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , k; cin >> n >> k;
    int a[n + 5];
    for(int i = 1 ; i <= n ; ++i)
        cin >> a[i];
    deque<int> dq;
    for(int i = 1 ; i <= n ; ++i){
        while(!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
        if(dq.front() + k <= i) dq.pop_front();
        if(i >= k) cout << a[dq.front()] << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    