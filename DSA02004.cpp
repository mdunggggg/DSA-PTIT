/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, a[12][12];
vector<string> ans;
vector<pair<string, pair<int, int>>> p = {{"D", {1, 0}}, {"L", {0, -1}}, {"R", {0, 1}}, {"U", {-1, 0}}};
void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        ans.push_back(s);
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int u = i + p[k].second.first;
        int v = j + p[k].second.second;
        if (u >= 1 && u <= n && v >= 1 && v <= n && a[u][v])
        {
            a[u][v] = 0;
            Try(u, v, s + p[k].first);
            a[u][v] = 1;
        }
    }
}
void Process() {
    ans.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    if (a[1][1] == 1)
    {
        a[1][1] = 0;
        Try(1, 1, "");
    }
    if (ans.size() == 0)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}

int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    