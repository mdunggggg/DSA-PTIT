/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    int a[n];
    long long sum = 0;
    for(int &x : a){
        cin >> x;
        if(x > 0) sum += 2 * x;
    }
    cout << sum;
}
int main(){
    Faster();
        Process();
}
    