/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void disPlay(int a[], int n){
    for(int i = 1 ; i < n ; ++i){
        if(abs(a[i] - a[i - 1]) == 1)
            return;
    }
    for(int i = 0 ; i < n ; ++i)
        cout << a[i];
    cout << '\n';
}
void Process(){
    int n ; cin >> n;
    int a[n];
    iota(a, a + n , 1);
    do{
        disPlay(a, n);
    }while(next_permutation(a , a + n));
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    