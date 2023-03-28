/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string s; 
vector<string>f;
int n;
void Try(int i , string cur){
    for(int j = 0 ; j <= 1 ; ++j){
        if(j == 1) cur += s[i];
        if(i == n - 1){
            if(cur != "")
                f.push_back(cur);
        }
        else Try(i + 1, cur);
        if(j == 1) cur.pop_back();
    }
}
void Process(){
    cin >> n >> s;
    f.clear();
    Try(0, "");
    sort(f.begin(), f.end());
    for(auto &x : f){
        cout << x << ' ';
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    