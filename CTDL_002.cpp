/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, k;
vector<int> a, b;
vector<vector<int>> res;
void check()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 1)
            sum += b[i];
    if (sum == k)
        res.push_back(a);
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
            check();
        else
            Try(i + 1);
    }
}
void Process(){
    cin >> n >> k;
    a.resize(n, 0);
    b.resize(n, 0);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    Try(0);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            if (res[i][j] == 1)
                cout << b[j] << ' ';
        cout << '\n';
    }
    cout << res.size();
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    