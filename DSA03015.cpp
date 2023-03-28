/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , s , m ; cin >> n >> s >> m;
    if(n * (s - s/ 7) < s * m) cout << -1 << '\n';
    else
    {
        for(int i = 1 ; i <= s - s/ 7 ; i++)
        {
            if(n * i >= s * m)
            {
                cout << i << '\n';
                return;
            }
        }
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    