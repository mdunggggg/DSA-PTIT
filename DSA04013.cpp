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
    sort(a, a + n);
    int res = n;
    int i = n / 2 - 1 , j = n - 1;
    while(i >= 0 && j >= n / 2){
        if(a[i] * 2 <= a[j]){
            res--;
            i--;
            j--;
        }
        else
            i--;
    }
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    