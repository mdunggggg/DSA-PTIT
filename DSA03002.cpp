/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int calc_min(string a, string b){
    for(auto &c : a){
        if(c == '6') c = '5';
    }
    for(auto &c : b){
        if(c == '6') c = '5';
    }
    return stol(a) + stol(b);
}
int calc_max(string a, string b){
    for(auto &c : a){
        if(c == '5') c = '6';
    }
    for(auto &c : b){
        if(c == '5') c = '6';
    }
    return stol(a) + stol(b);
}
void Process(){
    string a, b;
    cin >> a >> b;
    cout << calc_min(a , b) << ' ' << calc_max(a , b);
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    