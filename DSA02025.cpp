/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<string>v;
int f[15][15];
int n;
int calc(string s, string t){
    int fre[26] = {};
    int count = 0;
    for(auto i : s){
        fre[i - 'A']++;
    }
    for(auto i : t){
        count += fre[i - 'A'];
    }
    return count;
}
void Process(){
    cin >> n;
    v.resize(n);
    for(int i = 0 ; i < n ; ++i)
        cin >> v[i];
    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){
            f[i][j] = f[j][i] = calc(v[i], v[j]);
        }   
    } 
    int c[n];
    for(int i = 0 ; i < n ; ++i)
        c[i] = i;
    int res = 1e9;
    do{
        int sum = 0;
        for(int i = 0 ; i < n - 1 ; ++i){
            sum += f[c[i]][c[i + 1]];
            if(sum >= res)
                break;
        }
        res = min(res, sum);
    }while(next_permutation(c, c + n));
    cout << res;
}
int main(){
    Faster();
        Process();
}
    