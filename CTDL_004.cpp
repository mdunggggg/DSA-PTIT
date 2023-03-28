/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k, a[105], res;
void Try(int i , int count){
    if(count == k){
        ++res;
        return;
    }
    for(int j = i + 1 ; j <= n ; ++j){
        if(a[j] > a[i]){
            Try(j , count + 1);
        }
    }
}
void Process(){
    cin >> n >> k;
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    Try(0, 0);
    cout << res << '\n';
}
int main(){
    Faster();
        Process();
}
    