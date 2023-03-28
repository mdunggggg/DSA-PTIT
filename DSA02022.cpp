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
    vector<string> a1 = {"02", "20", "22"};
    vector<string> a2 = {"02"};
    vector<string> a3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for (int i = 0; i < a1.size(); i++)
        for (int j = 0; j < a2.size(); j++)
            for (int k = 0; k < a3.size(); k++)
                cout << a1[i] + "/" + a2[j] + "/" + a3[k] << '\n';
}
int main()
{
    Faster();
    // int t;
    // cin >> t;
    // while (t--)
        Process();
}
