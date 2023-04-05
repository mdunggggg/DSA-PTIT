#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
const ll mod = 1e15 + 7;
int n;
ll mul(ll a, ll b)
{
    if (!b)
        return 0;
    if (b == 1)
        return a % mod;
    ll tmp = mul(a, b / 2) % mod;
    if (b & 1)
        return ((2 * tmp) % mod + a % mod) % mod;
    return (2 * tmp) % mod;
}
struct matrix
{
    int sz;
    ll a[5][5] = {};
};
 
matrix mulMatrix(matrix A, matrix B)
{
    matrix tmp;
    tmp.sz = A.sz;
    for (int i = 1; i <= A.sz; i++)
    {
        for (int j = 1; j <= A.sz; j++)
        {
            ll sum = 0;
            for (int k = 1; k <= A.sz; k++)
            {
                sum += mul(A.a[i][k], B.a[k][j]);
                sum %= mod;
            }
            tmp.a[i][j] = sum;
        }
    }
    return tmp;
}
 
matrix powMatrix(matrix A, ll b)
{
    if (b == 1)
        return A;
    if (b % 2)
    {
        matrix tmp = powMatrix(A, b - 1);
        return mulMatrix(A, tmp);
    }
    matrix tmp = powMatrix(A, b / 2);
    return mulMatrix(tmp, tmp);
}
 
int main()
{
    // freopen("input.txt","r",stdin);
    matrix tmp;
    tmp.sz = 4;
    tmp.a[1][1] = tmp.a[1][2] = tmp.a[2][2] = tmp.a[2][3] = tmp.a[2][4] = tmp.a[3][2] = tmp.a[4][3] = 1;
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        matrix B = powMatrix(tmp, k + 1);
        cout << B.a[1][3] << endl;
    }
    return 0;
}