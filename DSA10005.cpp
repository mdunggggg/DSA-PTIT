/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n , m ;
int in[1005], out[1005];

void Process(){
    cin >> n >> m;
    for(int i = 0 ; i < 1005 ; ++i){
        in[i] = out[i] = 0;
    }
    for(int i = 0 ; i < m ; ++i){
        int x, y; cin >> x >> y;
        out[x]++;
        in[y]++;  
    }
    for(int i = 1 ; i <= n ; ++i){
        if(in[i] != out[i]){
            cout << "0\n";
            return;
        }
    }
    cout << "1\n";
  
   
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    