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
void Process()
{
    int n;
    cin >> n;
    int a[n], flag = 0;
    for (int &x : a)
    {
        cin >> x;
        if(x >= 0)
            flag = 1;
    }
    int res = 0;
    if(flag == 0){
        cout << 0 << '\n';
    }
    else{
        int cur = 0;
        for(int i = 0 ; i < n ; ++i){
            cur += a[i];
            if(cur < 0) cur = 0;
            else{
                res = max(res, cur);
            }
        }
        cout << res << '\n';
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
