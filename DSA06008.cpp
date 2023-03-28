/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, m ;
int calc(int x, int dd[] , int y[]){
    int res = 0;
    if(x == 0) return 0;
    if(x == 1) return dd[0];
    int pos = upper_bound(y , y + m , x) - y;
    res = m - pos;
    if(x == 2) res -= (dd[3] + dd[4]);    
    if(x == 3) res += dd[2];
    res += dd[0] + dd[1];
   
    return res;

}
void Process(){
    
    cin >> n >> m;
    int x[n], y[m];
    for(int i = 0 ; i < n ; ++i)
        cin >> x[i];
    for(int i = 0; i < m ; ++i)
        cin >> y[i];
    int res = 0;
    sort(y , y + m);
   
    int dd[5] = {};
    for(int i = 0 ; i < m ; ++i){

        if(y[i] < 5){
            ++dd[y[i]];
        }
    } 
    for(int i = 0 ; i < n ; ++i){
        res += calc(x[i], dd, y);
    }
    cout << res << '\n';
   
    
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    