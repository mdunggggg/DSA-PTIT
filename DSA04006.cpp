/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int x = 1;
int val(long long pos, long long n, long long cur)
{
    if (pos % 2 == 1)
        return 1;
    if (pos == cur)
        return (n % 2);
    if (pos > cur)
        return val(pos - cur, n / 2, cur / 2);
    return val(pos, n / 2, cur / 2);
}
void Process()
{
    long long n, l, r;
    cin >> n >> l >> r;
    if (n == 0)
        cout << "0\n";
    else
    {
         long long m = n, cnt = 0;
        while (m / 2)
        {
            cnt++;
            m /= 2;
        }
        long long cur = pow(2, cnt);
        long long res = 0;
        for ( long long i = l; i <= r; i++)
        {
            res += val(i, n, cur);
        }
        cout << res << '\n';
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    