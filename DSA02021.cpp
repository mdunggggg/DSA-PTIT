/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s;
    long long k;
    cin >> s >> k;
    long long n = s.size();
    vector<long long>a;
    a.push_back(n);
    int i = 0;
    while(true){
        if(2 * a[i] <= 2e18){
            a.push_back(2 * a[i]);
            i++;
        }
        else    
            break;
    }
    int pos = a.size();
    s = " " + s;
    --pos;
    while(k > n){
        if(a[pos] < k){
            long long idx = k - a[pos];
            if(idx != 1){
                k = idx - 1;
            }
            else{
                k = a[pos - 1] - 1;
            }
        }
        --pos;
    }
    cout << s[k] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    