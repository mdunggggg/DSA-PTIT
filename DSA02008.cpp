/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int a[15][15], res, k , n , dd[15], b[15];
vector<int>cur;
vector<vector<int>>v;
void Try(int i, int sum){
    for(int j = 1 ; j <= n ; ++j){
        if(dd[j] == 0){
            dd[j] = 1;
            b[i] = j;
            cur.push_back(j);
            if(i == n){
                if(sum + a[i][j] == k){
                    v.push_back(cur);
                }     
            }
            else 
                Try(i + 1, sum + a[i][j]);
            dd[j] = 0;
            cur.pop_back();
        }
    }
}
void Process(){
    cin >> n >> k;
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= n ; ++j){
            cin >> a[i][j];
        }
    }
    Try(1 , 0);
    cout << v .size() << '\n';
    for(auto x : v){
        for(int y : x){
            cout << y << ' ';
        }
        cout << '\n';
    }

}
int main(){
    Faster();
        Process();
}
    