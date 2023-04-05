/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , k;
    cin >> n >> k;
    vector<string>v(n), t(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> v[i];
        t[i] = v[i];
    }
    int a[k] = {};
    iota(a, a + k, 0);
    int res = 1e9;
    do{
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < k ; ++j){
                t[i][j] = v[i][a[j]];
            }
        }
        sort(t.begin(), t.end());
        int high = stoi(t[n - 1]);
        int low = stoi(t[0]);
        res = min(res, high - low);
    }while(next_permutation(a , a + k));
    cout << res << '\n';
}
int main(){
    Faster();
        Process();
}
    