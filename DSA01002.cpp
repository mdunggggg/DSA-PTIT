/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , k ; cin >> n >> k;
    int a[k + 5];
    for(int i = 1 ; i <= k ; ++i)
        cin >> a[i];
    int i = k;
    while(i > 0 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        iota(a , a + k , 1);
        for(int i = 0 ; i < k ; ++i){
            cout << a[i] << ' ';
        }
    }
    else{
        a[i] += 1;
        for(int j = i + 1 ; j <= k ; ++j){
            a[j] = a[j - 1] + 1;
        }
        for(int i = 1 ; i <= k ; ++i)
            cout << a[i] << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    