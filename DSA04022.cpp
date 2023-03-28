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
long long PowMod(long long n)
{
    if (n == 1)
        return 2;
    long long x = PowMod(n / 2);
    if (n % 2)
        return 2 * x * x;
    return x * x;
}
int calc(long long n, long long k)
{
    long long length = PowMod(n) / 2;
    if (k == 1)
        return 1;
    if (k == length)
        return n;
    if (k > length)
        k = length - (k - length);
    return calc(n - 1, k);
}
void Process()
{
    long long n;
    cin >> n;
    long long k;
    cin >> k;
    cout << (char)(calc(n, k) - 1 + 'A') << '\n';
}
int main()
{
    Faster();
    int t;
    cin >> t;
    while (t--)
        Process();
}
