/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void Process(){
    long long n, k;
    cin >> n;
    queue<long long> q;
    q.push(1);
    while (q.size()){
        k = q.front();
        if (k % n == 0){
            cout << k << '\n';
            break;
        }
        q.pop();
        q.push(k * 10);
        q.push(k * 10 + 1);
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    