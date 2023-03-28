/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    long long n, k, x, a[62], pos = 61;
    string s;
    cin >> s >> k;
    n = s.size();
    s = ' ' + s;
    a[1] = n;
    for (int i = 2; i <= 61; i++){
        if (a[i - 1] * 2 >= 2e18){
            pos = i - 1;
            break;
        }
        else
            a[i] = a[i - 1] * 2;
    }
    while (k > n) {
        if (a[pos] < k) {
            long long x = k - a[pos];
            if (x == 1)
                k = a[pos - 1];
            else
                k = x - 1;
        }
        pos--;
    }
    cout << s[k] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    