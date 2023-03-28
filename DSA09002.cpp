/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n; cin.ignore();
    vector<pair<int,int>>v;
    for(int i = 1 ; i <= n ;i++)
    {
        string s; getline(cin , s);
        stringstream ss(s);
        string token;
        while(ss >> token)
        {
            if(stoi(token) > i) v.push_back({i , stoi(token)});
        }
    }
    for(auto x : v) cout << x.first << " " << x.second << '\n';
}
int main(){
    Faster();
        Process();
}
    