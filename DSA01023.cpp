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
int n, k, a[15], b[15];
bool check()
{
    for (int i = 1; i <= k; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}
void Process()
{
    int p = 0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
        cin >> b[i];
    }
    while (++p)
    {
        if (check())
        {
            cout << p << endl;
            break;
        }
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != n - k + i)
            {
                a[i]++;
                for (int j = i + 1; j <= k; j++)
                    a[j] = a[j - 1] + 1;
                break;
            }
        }
    }
}
int main()
{
    Faster();
    int t;
    cin >> t;
    while (t--)
        Process();
}
