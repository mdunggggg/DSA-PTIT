/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , a[100][100];
vector<string>v;
void Try(int i , int j , string s){
    if(i == n && j == n){
        v.push_back(s);
        return;
    }
    if(i + 1 <= n && a[i + 1][j] == 1){
        Try(i + 1 , j , s + "D");
    }
    if(j + 1 <= n && a[i][j + 1] == 1){
        Try(i , j + 1 , s + "R");
    }
}
void Process(){
    cin >> n;
    memset(a , 0 , sizeof(a));
    v.clear();
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            cin >> a[i][j];
    Try(1 ,1, "");
    if(v.size() == 0 || a[1][1] == 0) cout << "-1\n";
    else{
        for(auto it : v){
            cout << it << ' ';
        }
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    