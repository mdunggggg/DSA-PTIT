/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , k ;
set<string>se;
vector<string>vs;
int a[100];
void DisPlay(){
    for(int i = 1 ; i <= k ; ++i){
        cout << vs[a[i] - 1] << ' ';
    }
    cout << '\n';
}
void Try(int i){
    for(int j = a[i - 1] + 1 ; j <= n - k + i ; ++j){
        a[i] = j;
        if(i == k){
            DisPlay();
        }
        else
            Try(i + 1);
    }
}
void Process(){
    cin >> n >> k;
    cin.ignore();
    for(int i = 0 ; i < n ; ++i){
        string s; cin >> s;
        se.insert(s);
    } 
    for(auto s : se){
        vs.push_back(s);
    }
    n = vs.size();
    cout << '\n';
    Try(1);
}
int main(){
    Faster();
        Process();
}
    