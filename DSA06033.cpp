/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);
    int ans = -1, Min = a[0].second, k = a[0].first;
    for (int i = 1; i < n; i++){
        if (a[i].first > k)
            ans = max(ans, a[i].second - Min);
        if (Min > a[i].second){
            Min = a[i].second;
            k = a[i].first;
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
    