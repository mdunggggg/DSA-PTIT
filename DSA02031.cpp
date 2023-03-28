/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
string s1 = "UEOAIY";
bool check(char c){
    for(char x : s1){
        if(c == x)
            return true;
    }
    return false;
}
void disPlay(string s){
    for(int i = 1 ; i < s.size() - 1 ; ++i){
        if(check(s[i]) == true && check(s[i - 1]) == false && check(s[i + 1]) == false)
            return;
    }
    cout << s;
    cout << '\n';
}
void Process(){
    char c; cin >> c;
    string s = "";
    for(char x = 'A' ; x <= c; ++x){
        s += x;
    } 
    if(s.size() == 2){
        cout << "AB\nBA";
        return;
    }
    do{
        disPlay(s);
    }while(next_permutation(s.begin() ,s.end()));
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    