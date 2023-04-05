/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
struct Job
{
    int stt , fi , se;
};
bool cmp(Job a , Job b)
{
    return a.se > b.se;
}
void Process(){
    int n ; cin >> n;
    Job a[n + 5];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i].stt >> a[i].fi >> a[i].se;
    }
    sort(a , a + n , cmp);
    int check[MAX];
    memset(check, 0, sizeof(check));
    int res = 0, count = 0;

    for(int i = 0 ;i < n ;i++)
    {
        while(check[a[i].fi] && a[i].fi > 0) --a[i].fi;
        if(a[i].fi > 0 && !check[a[i].fi])
        {   ++count;
            res += a[i].se;
            check[a[i].fi] = 1;
        }
    }
    cout << count << ' ' << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    