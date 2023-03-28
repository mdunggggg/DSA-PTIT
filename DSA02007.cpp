/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string res, s;
int k;
void Try(int k , int i){
    res = max(res, s);
    if(k == 0 || i == s.size()) return;
    int flag = 1;
    for(int j = i + 1 ; j < s.size(); ++j){
        if(s[j] > s[i]){
            flag = 0;
            swap(s[i], s[j]);
            Try(k - 1, i + 1);
            swap(s[i], s[j]);
        }
    }
    if(flag) Try(k , i + 1);
}
void Process(){
    cin >> k;
    getline(cin >> ws , s);
    res = s;
    Try(k , 0);
    cout << res << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    