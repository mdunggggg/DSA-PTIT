/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n , s;
    cin >> n >> s;
    if(s > 9 * n || s == 0){
        cout << -1 << ' ' << -1 << '\n';
        return;
    }
    int a[n];
    int k = s;
    --s;
    for(int i = n - 1 ; i >= 0 ; --i){
        if(s >= 9){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s;
            s = 0;
        }
    }
    a[0] += 1;
    int b[n];
    for(int i = 0 ; i < n ; ++i){
        if(k >= 9){
            b[i] = 9;
            k -= 9;
        }
        else{
            b[i] = k;
            k = 0;
        }
    }
    for(int i = 0 ; i < n ; ++i)
        cout << a[i];
    cout << ' ';
    for (int i = 0; i < n; i++){
        cout << b[i];
    }
    
}
int main(){
    Faster();
    
        Process();
}
    