/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n ;
    int a[n];
    for(int &x : a)  
        cin >> x;
    if(next_permutation(a, a + n)){
        for(auto x : a) 
            cout << x << ' ';
    }
    else{
        for(int i = 1 ; i <= n ; ++i)
            cout << i << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    