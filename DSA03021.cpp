/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool calc(int k, int a[], int n){
    for(int i = 0 ; i < n ; ++i){
        if(a[i]/(k + 1) + 1 > a[i] / k)
            return false;
    }
    return true;
}
void Process(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; ++i)
        cin >> a[i];
    int ans = 0;
    int high = *min_element(a , a + n);
    for(int i = high; i >= 1 ; --i){
        if(calc(i, a, n)){
            for(int j = 0 ; j < n ; ++j){
                ans += a[j]/(i + 1) + 1;
            }
            break;
        }
    }
    cout << ans;
}
int main(){
    Faster();
        Process();
}
    