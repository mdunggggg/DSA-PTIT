/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s;
    getline(cin >> ws , s);
    vector<string>v;
    stringstream ss(s);
    string token;
    while(ss >> token){
        v.push_back(token);
    }
    for(int i = v.size() - 1 ; i >= 0 ; --i)
        cout << v[i] << ' ';
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    