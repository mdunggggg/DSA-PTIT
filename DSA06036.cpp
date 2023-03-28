/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    long long k ; cin >> k;
    long long a[n];
    for(auto &x : a)
        cin >> x;
    sort(a , a + n);
    long long res = 0;
    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){            
            if(binary_search(a + j + 1 , a + n , k - a[i] - a[j])){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO" << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    