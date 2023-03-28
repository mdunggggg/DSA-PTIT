/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int check(int n, int a[], int b[]){
    for(int i = 0 ; i < n ; ++i)
        if(a[i] != b[i]) 
            return false;
    return true;
}
void Process(){
    int n ; cin >> n;
    int a[n], b[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    iota(b , b + n , 1);
    int count = 1;
    while(check(n ,a, b) == false){
        ++count;
        next_permutation(b , b + n);
    }
    cout << count << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    