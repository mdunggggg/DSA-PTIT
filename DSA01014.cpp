/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
   while (1){
        int n, k, s, d = 0;
        cin >> n >> k >> s;
        if (n < k)
        {
            cout << 0 << "\n";
            continue;
        }
        if (n == 0 && k == 0 && s == 0)
            return ;
        int a[k + 1];
        for (int i = 1; i <= k; i++)
            a[i] = i;
        while (1){
            int x = 0;
            for (int i = 1; i <= k; i++)
                x += a[i];
            if (x == s)
                d++;
            int ok = 0;
            for (int i = k; i >= 1; i--){
                if (a[i] != n - k + i){
                    ok = 1;
                    a[i]++;
                    for (int j = i + 1; j <= k; j++)
                        a[j] = a[j - 1] + 1;
                    break;
                }
            }
            if (ok == 0)
                break;
        }
        cout << d << "\n";
    }
}
int main(){
    Faster();
        Process();
}
    