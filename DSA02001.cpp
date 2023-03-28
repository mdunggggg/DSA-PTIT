/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , a[1000];

void disPlay(int n){
    cout << "[";
    for (int i = 1; i < n ; i++)
        cout << a[i] << " ";
    cout << a[n] << "]\n";
}
void Try(int n){
    if(n == 0)
        return;
    for(int i = 1 ; i <= n ; ++i)
        a[i] += a[i + 1];
    disPlay(n);
    Try(n - 1);
}
void Process(){
    cin >> n;
    for(int i = 1 ; i <= n ; ++i){
        cin >> a[i];
    }
    disPlay(n);
    Try(n - 1);
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    