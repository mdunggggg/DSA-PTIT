/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int x;
bool cmp(int a, int b){
    return abs(a - x) < abs(b - x);
}
void Process(){
    int n;
    cin >> n >> x;
    int a[n];
    for(int &x : a)
        cin >> x;
    stable_sort(a , a + n, cmp);
    for(int x : a)
        cout << x << ' ';
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    