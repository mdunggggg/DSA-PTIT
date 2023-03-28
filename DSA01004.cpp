/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k , a[1000];
void disPlay(){
    for(int i = 1 ; i <= k ; ++i)
        cout << a[i];
    cout << ' ';
    
}
void Try(int i){
    for(int j = a[i - 1] + 1 ; j <= n - k + i; ++j){
        a[i] = j;
        if(i == k)
            disPlay();
        else 
            Try(i + 1);
    }
}
void Process(){
    cin >> n >> k;
    Try(1);
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    