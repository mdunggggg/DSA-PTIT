/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    string s, t;
    getline(cin >> ws, s);
    getline(cin >> ws, t);
    map<int,int>mp;
    int n = s.size(), m = t.size();
    for(char &c : s){
        if(!isdigit(c)){
            c = ' ';
        }
    }
    for(char &c : t){
        if(!isdigit(c)){
            c = ' ';
        }
    }
    stringstream ss(s);
    string token;
    vector<int>v;
    while (ss >> token){
        v.push_back(stoi(token));
    }
    vector<int>vv;
    stringstream sss(t);
    while(sss >> token){
        vv.push_back(stoi(token));
    }
    n = v.size(), m = vv.size();
    for(int i = 0 ; i < n - 1 ; i += 2){
        mp[v[i + 1]] += v[i];
    }
    for(int i = 0 ; i < m - 1 ; i += 2){
        mp[vv[i + 1]] += vv[i];
    }
    vector<pair<int,int>>vvv(mp.begin(), mp.end());
    n = vvv.size();
    for(int i = n - 1 ; i >= 0 ; --i){
        cout << vvv[i].second << "*x^" << vvv[i].first;
        if(i != 0) cout << " + ";
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    