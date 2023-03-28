/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, k;
    cin >> n >> k;
    int a[k + 1], ok = 0, pos = k - 1;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    while (a[pos] + 1 == a[pos + 1] && pos > 0)
    {
        pos--;
    }
    if (pos == 0)
        for (int i = n - k + 1; i <= n; i++)
            cout << i << " ";
    else
    {
        pos++;
        a[pos]--;
        for (int i = k; i > pos; i--)
            a[i] = n - k + i;
        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    