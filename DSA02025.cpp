/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int count(string s1 , string s2){
    int dd[26] = {};
    int count = 0;
    for(char c : s1){
        dd[c - 'A'] = 1;
    }
    for(char c : s2){
        if(dd[c - 'A'] == 1){
            ++count;
        }
    }
    return count;
}
void Process(){
    int n ; cin >> n;
    vector<string>s(n);
    for(auto &x : s)
        getline(cin >> ws , x);
    sort(s.begin(), s.end());
    int res = 1e9;
    do{ 
        int cur = 0, flag = 1;
        for(int i = 0 ; i < n - 1 ; ++i){
            cur += count(s[i], s[i + 1]);
            if(cur > res){
                flag = 0;
                break;
            }
        }
        if(flag) res = min(res, cur);
    }while(next_permutation(s.begin(), s.end()));
    cout << res << '\n';

}
int main(){
    Faster();
        Process();
}
    