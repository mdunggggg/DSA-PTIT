/*  Hoang Manh Dung - D21 ProPTIT  */
#include <bits/stdc++.h>
using namespace std;
#define Faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, k;
string t;
vector<string> res;

void Try(string s)
{
    if (s.size() == n)
    {
        string z(k, 'A');
        int pos = s.find(z, 0);
        if (pos != -1)
        {
            string sub = s.substr(pos + 1);
            if (sub.find(z) == -1)
                res.push_back(s);
        }
        return;
    }
    Try(s + "A");
    Try(s + "B");
}
void Process()
{
    cin >> n >> k;
    t = string(k, 'A');
    Try("");
    cout << res.size() << '\n';
    sort(res.begin(), res.end());
    for (string i : res) cout << i << "\n";
}
int main()
{
    Faster();
    // int t; cin >> t;
    // while(t--)
    Process();
}
