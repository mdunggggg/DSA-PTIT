/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string ans;
vector<pair<int, int>> x;
vector<vector<int>> F;
void trace(int n, int k)
{
    if (n == 0)
        return;
    if (F[n][k] == F[n - 1][k]){
        ans += '0';
        trace(n - 1, k);
    }     
    else{
        ans += '1';
        trace(n - 1, k - x[n].first);
    }
}
void Process(){
    int n , k ; cin >> n >> k;
    F.resize((n + 1), vector<int>(k + 1, 0));
    x.resize(n + 1);
    for(int i = 1 ; i <= n ; ++i){
        cin >> x[i].second;
    }
    for (int i = 1; i <= n; i++)
        cin >> x[i].first;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++)
        {
            if (j < x[i].first)
                F[i][j] = F[i - 1][j];
            else
                F[i][j] = max(F[i - 1][j], F[i - 1][j - x[i].first] + x[i].second);
        }
    }
    cout << F[n][k] << '\n';
    trace(n, k);
    reverse(ans.begin(), ans.end());
    for (char i : ans)
        cout << i << ' ';
}
int main(){
    Faster();
        Process();
}
    