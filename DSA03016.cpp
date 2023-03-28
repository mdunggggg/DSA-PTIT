/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int s, d;
    cin >> s >> d;
    if(s > 9 * d || (s == 1 && d > 1)){
        cout << -1 << '\n';
        return;
    }
    int a[d + 1];
    for(int i = 1 ; i <= d ; ++i){
        if(s > 9){
            a[i] = 9;
            s -= 9;
        }
        else{
            a[i] = s - 1;
            s = 1;
        }
    }
    a[d] += 1;
    for(int i = d ; i >= 1 ; --i)
        cout << a[i];
    cout << '\n';
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    