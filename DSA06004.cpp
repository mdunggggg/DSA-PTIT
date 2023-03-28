/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, m, x;
    cin >> n >> m;
    map<int, int> a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
        c[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b[x]++;
        c[x]++;
    }
    for (auto i : c)
        cout << i.first << " ";
    cout << endl;
    for (auto i : a)
    {
        if (b[i.first] > 0)
            cout << i.first << " ";
    }
    cout << endl;
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    