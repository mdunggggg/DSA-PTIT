/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k, x, ans;
vector<int>a;
void Try(int i, int count){
    if(i == n){
        if(count == k){
            ++ans;
        }
        return;
    }
    int sum = 0;
    for(int j = i ; j < n ; ++j){
        sum += a[j];
        if(sum == x){
            Try(j + 1, count + 1);
        }
    }
}
void Process(){
    cin >> n >> k;
    a.resize(n);
    for(int &x : a)
        cin >> x;
    x = accumulate(a.begin(), a.end(), 0);
    if(x % k != 0){
        cout << "0\n";
        return;
    }
    x /= k;
    ans = 0;
    Try(0, 0);
    cout << ans << '\n';
}
int main(){
    Faster();
        Process();
}
    