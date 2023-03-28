/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n ; cin >> n;
    string s = "";
    for(int i = 1 ; i <= n ; ++i)
        s += to_string(i);
    vector<string>v;
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(), s.end()));

    for(int i = 0 ; i < v.size() ; ++i)
        cout << v[i] << ' ';
    cout << '\n';

}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    