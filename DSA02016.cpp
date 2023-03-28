/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[100], vis[100], chinh[100] , phu[100], cot[100];
int n, res;
void Try(int i){
    for(int j = 1 ; j <= n ; ++j){
        if(cot[j] == 0 && chinh[i + j - 1] == 0 && phu[i - j + n] == 0){
            cot[j] = chinh[i + j - 1] = phu[i - j + n] = 1;
            if(i == n) ++res;
            else Try(i + 1);
            cot[j] = chinh[i + j - 1] = phu[i - j + n] = 0;
        }
    }
}
void Process(){
    cin >> n;
    res = 0;
    for(int i = 1 ; i <= n ; ++i){
        cot[i] = chinh[i] = phu[i] = 0;
    }
    Try(1);
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    