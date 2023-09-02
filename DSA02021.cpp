#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl '\n'

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void process()
{
    string s;
    long long k, n;
    cin >> s >> k;
    n = s.size();
    while (n < k)
        n *= 2;
    while (n > 1ll * s.size())
    {
        if (k > n / 2)
        {
            k -= n / 2;
            if (k >= 2)
                k--;
            else
                k = n / 2;
        }
        n /= 2;
    }
    cout << s[k - 1] << endl;
}
int main()
{
    faster
        test
        process();
}
